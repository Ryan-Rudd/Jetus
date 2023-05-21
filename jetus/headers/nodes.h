#ifndef AST_NODE_TYPES_H
#define AST_NODE_TYPES_H

typedef enum {
NODE_PROGRAM,                 // Represents the entire program
    NODE_STATEMENT,               // Represents a generic statement
    NODE_EXPRESSION,              // Represents a generic expression
    NODE_IDENTIFIER,              // Represents an identifier (variable, function name, etc.)
    NODE_LITERAL,                 // Represents a literal value (integer, string, etc.)
    NODE_ASSIGNMENT,              // Represents an assignment statement (x = 42)
    NODE_VARIABLE_DECLARATION,    // Represents a variable declaration (int x = 42)
    NODE_IF_STATEMENT,            // Represents an if statement (if (condition) { ... })
    NODE_WHILE_LOOP,              // Represents a while loop (while (condition) { ... })
    NODE_FOR_LOOP,                // Represents a for loop (for (init; condition; increment) { ... })
    NODE_FUNCTION_DECLARATION,    // Represents a function declaration (int foo(int x) { ... })
    NODE_FUNCTION_CALL,           // Represents a function call (foo(42))
    NODE_RETURN_STATEMENT,        // Represents a return statement (return x)
    NODE_BINARY_EXPRESSION,       // Represents a binary expression (x + y, x == y)
    NODE_UNARY_EXPRESSION,        // Represents a unary expression (!x, -y)
    NODE_CONDITIONAL_EXPRESSION,  // Represents a conditional expression (condition ? expr1 : expr2)
    NODE_END_PROGRAM
} NodeType;

#endif /* AST_NODE_TYPES_H */
