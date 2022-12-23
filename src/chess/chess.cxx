#include "chess/chess.hxx"
#include "utils/token.hxx"

#include <cpr/cpr.h>

#include <iostream>
#include <fstream>
#include <string>

namespace chess {

    void demo() {
        auto token = utils::readToken();
        cpr::Response r = cpr::Get(
            cpr::Url{"https://lichess.org/api/account"},
            cpr::Header{{"Authorization", "Bearer " + token}}
            //cpr::Authentication{"user", "pass", cpr::AuthMode::BASIC},
            //cpr::Parameters{{"anon", "true"}, {"key", "value"}}
        );
        
        if (r.status_code != 200)
            std::cerr << "Something goes wrong!\n";
        
        std::cout << r.text; // [playing][@] -> <ID>

        //https://lichess.org/api/board/game/stream/<ID> -> map
        //-X POST https://lichess.org/api/board/game/<ID>/move/d7d5
    }

} // namespace chess