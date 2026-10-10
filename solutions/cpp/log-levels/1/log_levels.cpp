#include <string>

namespace log_line {
std::string message(std::string line) {
    int index = line.find(':');
    std::string line_message = line.substr(index + 2);
    return line_message;
}

std::string log_level(std::string line) {
    int index = line.find(']');
    std::string line_log_level = line.substr(1, index - 1);
    return line_log_level;
}

std::string reformat(std::string line) {
    std::string message = log_line::message(line);
    std::string log_level = '(' + log_line::log_level(line) + ')';
    std::string output = message + ' ' + log_level;

    return output;
}

}  // namespace log_line
