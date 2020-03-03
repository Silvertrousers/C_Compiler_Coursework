#include "ast.cpp"
#include <iostream>

int main()
{
    ast_node *ast=parseAST();
    ast->print_python(ast);
    return 0;
}
