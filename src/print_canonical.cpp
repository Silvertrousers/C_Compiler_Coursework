#include "./ast.cpp"
#include "./symbol_table.cpp"
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

typedef int MIPS_pointer;

int main()
{
    MIPS_pointer sp, fp;
    symbol_table s = symbol_table(NULL);
    ast_node * ast=parseAST();
    std::string a = ast->make_mips(s, sp, fp);
    return 0;
}
