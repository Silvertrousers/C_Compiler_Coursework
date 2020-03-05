#ifndef symbol_table_cpp
#define symbol_table_cpp
#include <iostream>
#include <string>
#include "symbol_table.hpp"
bool symbol_table::find_symbol(std::string n){
  for(int i=0;i<(symbols.size());i++){
    if(symbols[i]==n){
      return true;
    }
  }
  return false;
}

void symbol_table::insert(std::string s){
    symbols.push_back(s);
}

symbol_table::~symbol_table(){}
#endif
