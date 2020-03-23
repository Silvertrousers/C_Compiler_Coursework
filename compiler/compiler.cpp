#include "./include/ast.cpp"

#include "./include/symbol_table.cpp"

#include <iostream>
#include <vector>
#include <string>


int main()
{
    int sp, pc;
    symbol_table s = symbol_table();
    s.global_scope = &s;
    s.stack_pointer = 0;
    
    ast_node * ast=parseAST();
    std::string a = ast->make_mips(s, sp, pc);
    //s.print_table();
    return 0;
}
