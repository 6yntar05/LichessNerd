#include "chess/chess.hxx"
#include "utils/token.hxx"

#include <boost/asio.hpp>
#include <boost/asio/io_service.hpp>

#include <iostream>
#include <fstream>
#include <string>

namespace chess {

    void demo() {
        boost::asio::io_service io_service;
        auto token = utils::readToken();
        //https://lichess.org/api/account [playing][@] -> <ID>
        boost::asio::ip::tcp::resolver resolver(io_service);
        boost::asio::ip::tcp::resolver::query query("", "http");
        boost::asio::ip::tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
        //https://lichess.org/api/board/game/stream/<ID> -> map
        //-X POST https://lichess.org/api/board/game/<ID>/move/d7d5
    }

} // namespace chess