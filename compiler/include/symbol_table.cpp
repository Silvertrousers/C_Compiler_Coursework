#include "ast.hpp"
#include "symbol_table.hpp"

void symbol_table::insert(symbol s){
	var_pointer += 4;
	s.offset = var_pointer;
	s.stack_pointer = stack_pointer;
	symbols.push_back(s);
}

void symbol_table::print_table(int depth) {
	std::cout<<"table: "<<depth<<std::endl;
	std::cout<<"stack_pointer: "<<stack_pointer<<std::endl;
	std::cout<<"var_pointer: "<<var_pointer<<std::endl;
	for (int i = 0; i < symbols.size(); i++) {
		std::cout << symbols[i].name << ": " << symbols[i].type<<": "<<symbols[i].value<<":"<<symbols[i].offset<<"("<<symbols[i].stack_pointer<<")" << std::endl;
	}
	std::cout << "----------------" << std::endl;
	if (parent != NULL) {
		parent->print_table(depth+1);
	}
}

symbol symbol_table::find_symbol(std::string in){
	null_symbol.name = "NULL";
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
void symbol_table::replace(symbol s){
	bool found = false;
	for(int i=0;i<(symbols.size());i++){
    if(symbols[i].name== s.name){
			std::cout<<"#symbols[i]: "<<symbols[i].name<<", "<<symbols[i].numerical_value<<std::endl;
			std::cout<<"#s: "<<s.name<<", "<<s.numerical_value<<std::endl;
      symbols[i] = s;
			return ;
    }
  }
  if (parent != NULL && found ==false) {
	  return parent->replace(s);
  }
}
symbol_table::symbol_table(){
	parent = NULL;
	stack_pointer = 0;
	null_symbol.name = "";
	var_pointer = 0;
	symbol temp1, temp2, ra;
	temp1.name = "temp1";
	temp1.value = "0";
	temp1.type = "int";
	temp2.name = "temp2";
	temp2.value = "0";
	temp2.type = "int";
	ra.name = "return_address";
	ra.value = "0";
	ra.type = "int";
	insert(temp1);
	insert(temp2);
	insert(ra);
	t1_free = true;
	t2_free = true;
}

symbol_table::symbol_table(symbol_table *parent_scope){
	parent = parent_scope;
	null_symbol.name = "";
	var_pointer = 0;
	stack_pointer = 4+ parent->var_pointer + parent->stack_pointer;
	global_scope = parent_scope->global_scope;
	end_label = parent ->end_label;
	start_label = parent ->start_label;
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
