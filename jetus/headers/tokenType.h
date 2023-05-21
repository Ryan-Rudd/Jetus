#ifndef TOKEN_TYPES_H
#define TOKEN_TYPES_H

enum TokenType {
    LOAD,
    START,
    TILDE,
    AS,
    L_PAREN,
    R_PAREN,
    L_BRACE,
    R_BRACE,
    STRING,
    EQUALS,
    SEMICOLON,
    COMMA,
    ARROW,
    DOT,
    COLON,
    IDENTIFIER,
    KEYWORD,
    OPERATOR,
    COMMENT,
    END_OF_FILE
};

#endif  // TOKEN_TYPES_H
