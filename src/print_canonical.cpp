#include "ast.cpp"
#include <iostream>

int main()
{
    ast_node *ast=parseAST();
    ast->print_python();
    return 0;
}
