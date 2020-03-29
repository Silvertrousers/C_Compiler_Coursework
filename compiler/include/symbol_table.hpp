#ifndef symbol_table_hpp
#define symbol_table_hpp
#include <iostream>
#include <vector>
#include <string>

struct symbol{
  std::string name;
  std::string type;
  int label; //points to somewhere in instruciton mem
  std::string value;
  int numerical_value;
  int offset;
  int stack_pointer;
};

class symbol_table{
  public:
    void insert(symbol s);
    void replace(symbol s);
    void print_table(int depth);
    symbol find_symbol(std::string in);
    symbol_table();
    symbol_table(symbol_table *parent_scope);
    ~symbol_table();
    bool t1_free;
    bool t2_free;
    int stack_pointer;
    int var_pointer;
    std::string start_label;
    std::string end_label;
    std::vector<symbol> symbols;
    symbol null_symbol;
    symbol_table *parent;
    symbol_table *global_scope;
};

//mips is basically a three address code
//can just use three registers and whenever another variable needs to be accessed
//it is taken from mem and put into a register even if it already in one
//e.g. z = x + y
//lw r2, x  get value from location x from mem
//lw r3, y  get value from location y from mem
//add r1,r2,r3
//sw r1, z  store the result in location in location z in mem

//all identifiers are just labels for a memory location so x and y are pointer to
//locations that contain their values
//a similar thing should be done with mult and div
//means that registers dont need to be kept track of, just the memory location of different identifiers
#endif
