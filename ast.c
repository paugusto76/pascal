#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

ASTNode *create_node(const char *type, const char *value)
{
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    if (!node)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    node->type = strdup(type);
    if (value)
    {
        node->value = strdup(value);
    }
    else
    {
        node->value = NULL;
    }
    node->num_children = 0;
    return node;
}

void add_child(ASTNode *parent, ASTNode *child)
{
    if (parent->num_children < 10)
    {
        parent->children[parent->num_children++] = child;
    }
    else
    {
        fprintf(stderr, "Maximum number of children reached\n");
        free_ast(child);
    }
}

void free_ast(ASTNode *node)
{
    if (node)
    {
        free(node->type);
        free(node->value);
        for (int i = 0; i < node->num_children; i++)
        {
            free_ast(node->children[i]);
        }
        free(node);
    }
}

void print_ast(ASTNode *node, int depth)
{
    if (node)
    {
        for (int i = 0; i < depth; i++)
        {
            printf("  ");
        }
        printf("%s: %s\n", node->type, node->value);
        for (int i = 0; i < node->num_children; i++)
        {
            print_ast(node->children[i], depth + 1);
        }
    }
}
