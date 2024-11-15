#include "Scanner.hpp"

Scanner::Scanner(const std::string& source) {
   this->source = source; 
}

std::vector<Token> Scanner::scan_tokens() {
    return tokens;
}
