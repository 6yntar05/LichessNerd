#include "chess/chess.hxx"
#include "utils/token.hxx"

#include <cpr/cpr.h>
#include <simdjson.h>
#include <curl/curl.h>

#include <iostream>
#include <fstream>
#include <cstddef>
#include <thread>

constexpr std::string_view extractGameID(std::string_view str) {
    auto exit_p = std::find(str.rbegin(), str.rend(), '/');
    auto entry_p = std::find(exit_p + 1, str.rend(), '/');

    return str.substr(
        entry_p.base() - str.begin(),
        (exit_p.base() - str.begin()) - (entry_p.base() - str.begin()) - 1
    );
}

namespace chess {

    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
        ((std::string*)userp)->append((char*)contents, size * nmemb);
        return size * nmemb;
    }

    void threadCallback(std::string* str) {
        while(true) {
            std::cout << *str;
        }
    }

    void demo(const std::string token) {
        simdjson::dom::parser parser;
        simdjson::dom::element element;

        // Accout info
        cpr::Response r = cpr::Get(
            cpr::Url{"https://lichess.org/api/account"},
            cpr::Header{{"Authorization", "Bearer " + token}}
        );
        if (r.status_code != 200)
            std::cerr << "Something goes wrong!\n";

        auto doc = parser.parse(r.text);
        std::cout << "Username: " << doc.at_key("username").get_c_str() << '\n';
        auto gameID = ::extractGameID(doc.at_key("playing").get_c_str().take_value());
        std::cout << "Current game: " << gameID << '\n';
        std::cout << "Total unfinished games: " << doc.at_key("count").at_key("playing").get_int64() << '\n';

        // Game Stream
        CURL *curl;
        CURLcode res;
        struct curl_slist *list = NULL;
        std::string readBuffer;

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, ("https://lichess.org/api/board/game/stream/" + static_cast<std::string>(gameID)).c_str());
            list = curl_slist_append(list, ("Authorization: Bearer " + token).c_str());
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
            
            std::thread th(threadCallback, &readBuffer);
            th.detach();
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
        
        //-X POST https://lichess.org/api/board/game/<ID>/move/d7d5
    }

} // namespace chess