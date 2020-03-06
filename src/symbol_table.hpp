#include <iostream>
#include <vector>
#include <string>

struct symbol{
  std::string name;
  std::string type;
  std::string label;
}

class symbol_table{
  public:
    void insert(symbol s);
    symbol find_symbol(std::string in);
    ~symbol_table();
  private:
    std::vector<symbol> symbols;
    symbol_table *parent;
}
