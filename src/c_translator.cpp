#include "ast.hpp"
#include <iostream>
#include "ast.cpp"
#include "symbol_table.cpp"
int main()
{
    int tab_count = 0;
    symbol_table sym_tab;

    ast_node *ast=parseAST();
    ast->print_python(tab_count, sym_tab);

    std::cout<<"if __name__ == \"__main__\":"<<std::endl;
    std::cout<<"\timport sys"<<std::endl;
    std::cout<<"\tret=main()"<<std::endl;
    std::cout<<"\tsys.exit(ret)"<<std::endl;

    std::cout<<std::endl;
    for(int i=0;i<(sym_tab.symbols).size();i++){
      std::cout<<"\t"<<sym_tab.symbols[i]<<", "<<std::endl;
    }
    return 0;
}
