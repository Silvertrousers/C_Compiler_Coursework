#ifndef c2python_symbol_table_cpp
#define c2python_symbol_table_cpp
#include <iostream>
#include <string>
#include "c2python_symbol_table.hpp"
bool c2python_symbol_table::find_symbol(std::string n){
  for(int i=0;i<(symbols.size());i++){
    if(symbols[i]==n){
      return true;
    }
  }
  return false;
}

void c2python_symbol_table::insert(std::string s){
    symbols.push_back(s);
}

c2python_symbol_table::~c2python_symbol_table(){}
#endif
