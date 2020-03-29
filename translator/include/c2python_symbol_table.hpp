#ifndef c2python_symbol_table_hpp
#define c2python_symbol_table_hpp

#include <vector>
#include <string>

class c2python_symbol_table{
  public:
    std::vector<std::string> symbols;

    bool find_symbol(std::string s);
    void insert(std::string s);//return index of symbol
    ~c2python_symbol_table();
};


#endif
