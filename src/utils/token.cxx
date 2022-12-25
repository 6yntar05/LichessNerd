#include "utils/token.hxx"

#include <iostream>
#include <fstream>

namespace utils {

std::string readToken(const std::string path) {
    std::string token;

    std::ifstream tokenFile(path);
    if (!tokenFile.is_open())
        std::cerr << "Unable to read the token!\n"; // Later...
    tokenFile >> token;
    tokenFile.close();

    return token;
}

} // namespace utils