#ifndef symbol_table_hpp
#define symbol_table_hpp

#include <vector>
#include <string>

class symbol_table{
  public:
    std::vector<std::string> symbols;

    bool find_symbol(std::string s);
    void insert(std::string s);//return index of symbol
    ~symbol_table();
};


#endif
