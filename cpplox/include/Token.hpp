#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include "TokenType.hpp"

class Token {
public:
    Token();

private:
    std::string lexeme;
    TokenType token_type; 
};

#endif // TOKEN_HPP
