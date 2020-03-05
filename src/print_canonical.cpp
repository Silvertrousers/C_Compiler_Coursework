#include "ast.cpp"
#include <iostream>

int main()
{
    int tab_count = 0;
    ast_node *ast=parseAST();
    ast->print_python(tab_count);

    std::cout<<"if __name__ == \"__main__\":"<<std::endl;
    std::cout<<"\timport sys"<<std::endl;
    std::cout<<"\tret=main()"<<std::endl;
    std::cout<<"\tsys.exit(ret)"<<std::endl;

    return 0;
}
