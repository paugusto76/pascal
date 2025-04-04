#pragma once

typedef struct ASTNode
{
    char *type; // Type of the node (e.g., "number", "operator", "variable")
    char *value; // Value of the node (e.g., "5", "+", "x")
    struct ASTNode *children[10]; // Array of child nodes
    int num_children; // Number of child nodes
} ASTNode;

#define AST_NODE_TYPE_PROGRAM "program"
#define AST_NODE_TYPE_OPTIONAL_PARAMETERS "optional_parameters"
#define AST_NODE_TYPE_PARAMETERS_LIST "parameters_list"
#define AST_NODE_TYPE_PARAMETERS_LIST_TAIL "parameters_list_tail"
#define AST_NODE_TYPE_IDENTIFIERS_LIST "identifiers_list"
#define AST_NODE_TYPE_IDENTIFIERS_LIST_TAIL "identifiers_list_tail"
#define AST_NODE_TYPE_TYPE "type"
#define AST_NODE_TYPE_ORDINAL_TYPE "ordinal_type"
#define AST_NODE_TYPE_FUNCTION_HEADER "function_header"
#define AST_NODE_TYPE_BLOCK "block"
#define AST_NODE_TYPE_BLOCK_OR_FORWARD "block_or_forward"
#define AST_NODE_TYPE_FORWARD "forward"
#define AST_NODE_TYPE_FUNCTION_HEADER_TAIL "function_header_tail"
#define AST_NODE_TYPE_FORMAL_PARAMETERS_LIST "formal_parameters_list"
#define AST_NODE_TYPE_FORMAL_PARAMETERS_LIST_TAIL "formal_parameters_list_tail"
#define AST_NODE_TYPE_INSTRUCTIONS_LIST "instructions_list"
#define AST_NODE_TYPE_INSTRUCTIONS_LIST_TAIL "instructions_list_tail"
#define AST_NODE_TYPE_INSTRUCTION "instruction"
#define AST_NODE_TYPE_IF_STATEMENT "if_statement"
#define AST_NODE_TYPE_WHILE_STATEMENT "while_statement"
#define AST_NODE_TYPE_REPEAT_UNTIL_STATEMENT "repeat_until_statement"
#define AST_NODE_TYPE_ELSE_EXPRESSION "else_expression"
#define AST_NODE_TYPE_FOR_STATEMENT "for_statement"
#define AST_NODE_TYPE_FOR_TAIL_EXPRESSION "for_tail_expression"
#define AST_NODE_TYPE_CASE_STATEMENT "case_statement"
#define AST_NODE_TYPE_CASE_BRANCHES "case_branches"
#define AST_NODE_TYPE_CASE_BRANCHES_TAIL "case_branches_tail"
#define AST_NODE_TYPE_EXPRESSION "expression"
#define AST_NODE_TYPE_SIMPLE_EXPRESSION "simple_expression"
#define AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL "simple_expression_tail"
#define AST_NODE_TYPE_TERM "term"
#define AST_NODE_TYPE_TERM_TAIL "term_tail"
#define AST_NODE_TYPE_FACTOR "factor"
#define AST_NODE_TYPE_FUNCTION_CALL "function_call"
#define AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST "effective_parameters_list"
#define AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST_TAIL "effective_parameters_list_tail"
#define AST_NODE_TYPE_ASSIGNMENT_STATEMENT "assignment_statement"
#define AST_NODE_TYPE_SIGNAL "signal"
#define AST_NODE_TYPE_CONSTANT "constant"
#define AST_NODE_TYPE_CONSTANT_LIST "constant_list"
#define AST_NODE_TYPE_CONSTANT_LIST_TAIL "constant_list_tail"

#define AST_NODE_TYPE_IDENTIFIER "identifier"
#define AST_NODE_TYPE_INTEGER "integer"
#define AST_NODE_TYPE_REAL "real"
#define AST_NODE_TYPE_STRING "string"

ASTNode *create_node(const char *type, const char *value);
void add_child(ASTNode *parent, ASTNode *child);
void free_ast(ASTNode *node);
void print_ast(ASTNode *node, int depth);

