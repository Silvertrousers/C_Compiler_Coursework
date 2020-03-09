#include "./ast.cpp"
#include "./symbol_table.cpp"
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
int main()
{
    symbol_table s;
    ast_node * ast=parseAST();
    std::string a = ast->make_mips(s);
    return 0;
}
