#include "ast.h"
#include <stdio.h>
#include <stdlib.h>

extern ASTNode* root;
extern FILE *yyin;
extern int yylex();
extern int yyparse();
extern void yyerror(const char *s);

int main(int argc, char **argv)
{
    // Open the input file from arguments
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Parse the input file
    if (yyparse() != 0)
    {
        fprintf(stderr, "Parsing failed\n");
        fclose(yyin);
        return EXIT_FAILURE;
    }

    // Print the AST
    printf("Abstract Syntax Tree:\n");
    print_ast(root, 0);
    printf("\n");

    // Free the AST
    free_ast(root);

    fclose(yyin);
    return EXIT_SUCCESS;
    // Return success
    // return 0;
}