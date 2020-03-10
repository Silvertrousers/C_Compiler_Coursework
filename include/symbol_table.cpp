#include <iostream>
#include <vector>
#include <string>

#include "symbol_table.hpp"

symbol_table::symbol_table(symbol_table *parent_scope) {
	parent = parent_scope;
	null_symbol.name = "";
}
symbol_table::symbol_table(){
	parent = NULL;
	null_symbol.name = "";
}

void symbol_table::insert(symbol s){
	var_pointer += 4;
	s.offset = var_pointer - stack_pointer;
	symbols.push_back(s);
}

void symbol_table::print_table() {
	for (int i = 0; i < symbols.size(); i++) {
		std::cout << symbols[i].name << ": " << symbols[i].type << std::endl;
	}
	std::cout << "----------------" << std::endl;
	if (parent != NULL) {
		parent->print_table();
	}
}

symbol symbol_table::find_symbol(std::string in){
  for(int i=0;i<(symbols.size());i++){
    if(symbols[i].name==in){
      return symbols[i];
    }
  }
  if (parent != NULL) {
	  return parent->find_symbol(in);
  }
  else {
	  return null_symbol;
  }
}

symbol_table::~symbol_table(){}
