#include <string>

const std::string CLR = "\033[0m";
const std::string RED = "\033[31m";
const std::string YEL = "\033[33m";
const std::string BOLD = "\033[1m";

namespace ui {

void error(std::string msg);
void warn(std::string msg);
void info(std::string msg);
void msg(std::string msg);

}