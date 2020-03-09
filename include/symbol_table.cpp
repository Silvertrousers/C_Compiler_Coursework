#include <iostream>
#include <vector>
#include <string>

#include "symbol_table.hpp"

void symbol_table::insert(symbol s){
  
}

symbol symbol_table::find_symbol(std::string in){
  for(int i=0;i<(symbols.size());i++){
    if(symbols[i].name==in){
      return symbols[i];
    }
  }
}

symbol_table::~symbol_table(){}
