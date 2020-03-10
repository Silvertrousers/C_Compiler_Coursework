#ifndef symbol_table_hpp
#define symbol_table_hpp
#include <iostream>
#include <vector>
#include <string>

struct symbol{
  std::string name;
  std::string type;
  std::string label;
  std::string value;
};

class symbol_table{
	public:
		symbol_table(symbol_table *parent_scope);
		void insert(symbol s);
		symbol find_symbol(std::string in);
		~symbol_table();
	private:
		int stack_pointer;
		int offset;
		std::vector<symbol> symbols;
		symbol null_symbol;
		symbol_table *parent;
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
