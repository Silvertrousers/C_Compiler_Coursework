#include "./include/c2python_ast.hpp"
#include <iostream>
#include "./include/c2python_ast.cpp"
#include "./include/c2python_symbol_table.cpp"
int main(int argc, char *argv[])
{

    int tab_count = 0;
    symbol_table sym_tab;

    ast_node *ast=parseAST();
    ast->print_python(tab_count, sym_tab);

    std::cout<<std::endl;
    std::cout<<"if __name__ == \"__main__\":"<<std::endl;
    std::cout<<"\timport sys"<<std::endl;
    std::cout<<"\tret=main()"<<std::endl;
    std::cout<<"\tsys.exit(ret)"<<std::endl;

    return 0;
}
