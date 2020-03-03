#include "ast.cpp"
#include <iostream>

int main()
{
    int tab_count = 0;
    ast_node *ast=parseAST();
    ast->print_python(tab_count);
    return 0;
}
