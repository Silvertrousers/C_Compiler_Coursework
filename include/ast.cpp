#ifndef ast_cpp
#define ast_cpp
#include <iostream>
#include <string>
#include "ast.hpp"
#include "symbol_table.hpp"

std::string ast_node::make_mips(symbol_table &table, int &sp, int &pc){
  //table.print_table();

  for(int i=0;i<branches.size();i++){
    if(branches[i] == NULL){
      ast_node * temp = new ast_node("NULL","");
      branches[i] = temp;
    }
  }
  if(node_type == "NULL"){
    return "";
  }
  if(node_type == "TRANSLATION_UNIT"){/*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(table, sp, pc);
    std::cout<<branches[1]->make_mips(table, sp, pc);
  }

  if(node_type == "EXTERNAL_DECLARATION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "FUNCTION_DECLARATION"){
    symbol_table newscope = symbol_table(&table);
    symbol temp;
    temp.name = branches[1]->branches[0]->value;
    temp.type = "function";
    temp.label = pc;
    table.insert(temp);
    symbol_table new_scope = symbol_table(&newscope);
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(new_scope, sp, pc);//reutrn type
    //fn name should already be in the stack
    std::cout<<branches[2]->make_mips(new_scope, sp, pc);//arguments
    //assign memory locations to labels has already been done since symbol table keeps track of stack
    std::cout<<temp.name<<":"<<std::endl;
    std::cout<<branches[3]->make_mips(new_scope, sp, pc);//body
  }

  if(node_type == "STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "LABELED_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DEFAULT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CASE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "COMPOUND_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope = symbol_table(&table);
    branches[0]->make_mips(new_scope, sp, pc);
    branches[1]->make_mips(new_scope, sp, pc);

  }
  if(node_type == "DECLARATION_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STATEMENT_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "SELECTION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope = symbol_table(&table);
    if (branches[0]-> node_type == "if"){
      std::cout<<branches[2]->make_mips(new_scope, sp, pc);
      //branch if condition is not met to label else
      std::cout<<branches[3]->make_mips(new_scope, sp, pc);
      //branch to label end
      //label else
      if (branches[4]-> node_type == "else"){
        std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      }
      //label end
    }
  }
  if(node_type == "T_SWITCH"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_IF"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_ELSE"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ITERATION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope(&table);
    if (branches[0]-> node_type == "for"){
      std::cout<<branches[1]->make_mips(new_scope, sp, pc);
      std::cout<<branches[2]->make_mips(new_scope, sp, pc);
      std::cout<<branches[3]->make_mips(new_scope, sp, pc);
      std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      //label end
    }
  }
  if(node_type == "T_FOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_WHILE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_DO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "JUMP_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "GOTO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "RETURN"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "PRIMARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/
    return value;
  }

  if(node_type == "POSTFIX_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ARGUMENT_EXPRESSION_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "UNARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "SIZE_OF"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "UNARY_OPERATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CAST_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "MULTIPLICATIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "*"){
      if(table.t1_free == true){
        std::cout<<"mult "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        std::cout<<"mflo temp1"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      else{
        std::cout<<"mult "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        std::cout<<"mflo temp2"<<std::endl;
        table.t1_free = false;
        return "temp2";
      }
    }
  }
  if(node_type == "ADDITIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "+"){
      if(table.t1_free == true){
        std::cout<<"add temp1, "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      else{
        std::cout<<"add temp2, "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
    if(value == "-"){
      if(table.t1_free == true){
        std::cout<<"sub temp1, "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      else{
        std::cout<<"sub temp2, "<<branches[0]->make_mips(table, sp, pc)<<", "<<branches[1]->make_mips(table, sp, pc)<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
  }
  if(node_type == "SHIFT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "RELATIONAL_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "EQUALITY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "EXCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "INCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "LOGICAL_AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "LOGICAL_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "CONDITIONAL_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ASSIGNMENT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    if(branches[1]->value == "="){
      std::string s = branches[0]->value;
      std::cout<<"sw "<<branches[2]->make_mips(table, sp, pc)<<", "<<table.find_symbol(s).offset<<"("<<table.stack_pointer<<")"<<std::endl;
    }
  }
  if(node_type == "ASSIGNMENT_OPERATOR"){/*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "CONSTANT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "DECLARATION_SPECIFIERS"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "INIT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "INIT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
    symbol s;
    s.name = branches[0]->value;
    s.type = "int";
    s.value = "0";
    if(branches[1] != NULL && branches[1]->node_type != "NULL"){s.value = branches[1]->value;}
    table.insert(s);
    //table.print_table();
  }
  if(node_type == "STORAGE_CLASS_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_SPECIFIER"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STRUCT_OR_UNION_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_OR_UNION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATION_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUMERATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUMERATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM_CONSTANT"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_QUALIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "POINTER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DEREFERENCE"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_QUALIFIER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_TYPE_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ELIPSIS"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "IDENTIFIER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "IDENTIFIER"){
    return value;
  }
  if(node_type == "TYPE_NAME"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ABSTRACT_DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_ABSTRACT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPEDEF_NAME"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "INITIALIZER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "INITIALIZER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  return "";
}
#endif
