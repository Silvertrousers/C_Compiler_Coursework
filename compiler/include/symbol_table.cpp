#include "ast.hpp"
#include "symbol_table.hpp"

void symbol_table::insert(symbol s){
	var_pointer += 4;
	s.offset = var_pointer;
	symbols.push_back(s);
}

void symbol_table::print_table() {
	std::cout<<"stack_pointer: "<<stack_pointer<<std::endl;
	for (int i = 0; i < symbols.size(); i++) {
		std::cout << symbols[i].name << ": " << symbols[i].type<<": "<<symbols[i].value<<":"<<symbols[i].offset << std::endl;
	}
	std::cout << "----------------" << std::endl;
	if (parent != NULL) {
		parent->print_table();
	}
}

symbol symbol_table::find_symbol(std::string in){
	symbol temp = global_scope->find_symbol(in);
	if(temp == null_symbol){
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
	else{
		return temp;//if the symbol was found in the global scope, return the global scope version
	}
}

symbol_table::symbol_table(){
	parent = NULL;
	stack_pointer = 0;
	null_symbol.name = "";
	var_pointer = 0;
	symbol temp1, temp2;
	temp1.name = "temp1";
	temp1.value = "0";
	temp1.type = "int";
	temp2.name = "temp2";
	temp2.value = "0";
	temp2.type = "int";
	insert(temp1);
	insert(temp2);
	t1_free = true;
	t2_free = true;
}

symbol_table::symbol_table(symbol_table *parent_scope){
	parent = parent_scope;
	null_symbol.name = "";
	var_pointer = 0;
	stack_pointer = parent->var_pointer + parent->stack_pointer;
	global_scope = parent_scope->global_scope;
	symbol temp1, temp2;
	temp1.name = "temp1";
	temp1.value = "0";
	temp1.type = "int";
	temp2.name = "temp2";
	temp2.value = "0";
	temp2.type = "int";
	insert(temp1);
	insert(temp2);
	t1_free = true;
	t2_free = true;
}
symbol_table::~symbol_table(){}
