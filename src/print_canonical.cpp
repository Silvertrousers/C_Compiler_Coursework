#include "ast.hpp"
#include <iostream>
int main()
{
    const ast_node *ast=parseAST();
    //
    // ast->print(std::cout);
    return 0;
}
