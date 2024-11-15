#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

enum class TokenType {
    // Single character tokens.
    LEFT_PARENTHESES, RIGHT_PARENTHESES,
    LEFT_BRACES, RIGHT_BRACES,
    COMMA, SEMICOLON, DOT, 
    MINUS, PLUSH, SLASH, STAR,

    // One or two character tokens.
    BANG, BANG_EQUAL,
    EQUAL, EQUAL_EQUAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,

    // Literals.
    IDENTIFIER, STRING, NUMBER,

    // Keywords.
    AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
    PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

    END_OF_FILE,
};

#endif // TOKEN_TYPE_H
