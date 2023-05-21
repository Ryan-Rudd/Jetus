#ifndef TOKEN_TYPES_H
#define TOKEN_TYPES_H

enum TokenType {
    LOAD,              // 'load' keyword
    START,             // 'start' keyword
    TILDE,             // '~' character
    AS,                // 'as' keyword
    L_PAREN,           // '(' character
    R_PAREN,           // ')' character
    L_BRACE,           // '{' character
    R_BRACE,           // '}' character
    STRING,            // string literal
    EQUALS,            // '=' character
    SEMICOLON,         // ';' character
    COMMA,             // ',' character
    ARROW,             // '>>' token
    DOT,               // '.' character
    COLON,             // ':' character
    IDENTIFIER,        // identifier (variable/function name)
    KEYWORD,           // other keywords (e.g., 'clock', 'io', 'os')
    OPERATOR,          // operators (e.g., '+', '-', '*', '/')
    COMMENT,           // comment
    END_OF_FILE        // end of file marker
};

#endif  // TOKEN_TYPES_H
