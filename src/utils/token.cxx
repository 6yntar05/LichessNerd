#include "utils/token.hxx"
#include "ui/feedback.hxx"

#include <iostream>
#include <fstream>

namespace utils {

std::string readToken(const std::string path) {
    std::string token;

    std::ifstream tokenFile(path);
    if (!tokenFile.is_open())
        ui::error("Unable to read the token!");
    tokenFile >> token;
    tokenFile.close();

    return token;
}

} // namespace utils