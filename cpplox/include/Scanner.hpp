#ifndef SCANNER_HPP
#define SCANNER_HPP

#include <vector>
#include <string>
#include "Token.hpp"

class Scanner {
public:
    Scanner(const std::string& source);
    std::vector<Token> scan_tokens();
private:
    int start = 0;
    int current = 0;
    int line = 1;
    std::vector<Token> tokens;
    std::string source;
};

#endif // SCANNER_HPP
