#include <iostream>
#include <string>
#include <vector>
#include "../headers/nodes.h"

std::string enumToString(NodeType enumValue);

// Function to get the list of enum types as strings
std::vector<std::string> getEnumTypes()
{
    std::vector<std::string> types;

    // Iterate through each enum item and add its type to the vector
    for (int i = static_cast<int>(NODE_PROGRAM); i <= static_cast<int>(NODE_END_PROGRAM); ++i)
    {
        NodeType enumItem = static_cast<NodeType>(i);
        types.push_back(enumToString(enumItem));
    }

    return types;
}

// Function to convert NodeType enum values to strings
std::string enumToString(NodeType enumValue)
{
    switch (enumValue)
    {
        case NODE_PROGRAM:
            return "NODE_PROGRAM";
        case NODE_STATEMENT:
            return "NODE_STATEMENT";
        case NODE_EXPRESSION:
            return "NODE_EXPRESSION";
        case NODE_IDENTIFIER:
            return "NODE_IDENTIFIER";
        case NODE_LITERAL:
            return "NODE_LITERAL";
        case NODE_ASSIGNMENT:
            return "NODE_ASSIGNMENT";
        case NODE_VARIABLE_DECLARATION:
            return "NODE_VARIABLE_DECLARATION";
        case NODE_IF_STATEMENT:
            return "NODE_IF_STATEMENT";
        case NODE_WHILE_LOOP:
            return "NODE_WHILE_LOOP";
        case NODE_FOR_LOOP:
            return "NODE_FOR_LOOP";
        case NODE_FUNCTION_DECLARATION:
            return "NODE_FUNCTION_DECLARATION";
        case NODE_FUNCTION_CALL:
            return "NODE_FUNCTION_CALL";
        case NODE_RETURN_STATEMENT:
            return "NODE_RETURN_STATEMENT";
        case NODE_BINARY_EXPRESSION:
            return "NODE_BINARY_EXPRESSION";
        case NODE_UNARY_EXPRESSION:
            return "NODE_UNARY_EXPRESSION";
        case NODE_CONDITIONAL_EXPRESSION:
            return "NODE_CONDITIONAL_EXPRESSION";
        case NODE_END_PROGRAM:
            return "NODE_END_PROGRAM";
        default:
            return "Unknown";
    }
}

// Function to print the list of enum types
void printEnumTypes()
{
    std::vector<std::string> types = getEnumTypes();

    for (const auto& type : types)
    {
        std::cout << type << std::endl;
    }
}

