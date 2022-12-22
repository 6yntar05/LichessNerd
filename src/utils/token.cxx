#include "utils/token.hxx"
#include "ui/feedback.hxx"

#include <iostream>
#include <fstream>

namespace utils {

std::string readToken() {
    std::string token;

    std::ifstream tokenFile("./token.txt");
    if (!tokenFile.is_open())
        ui::error("Unable to read the token!");
    tokenFile >> token;
    tokenFile.close();

    return token;
}

} // namespace utils