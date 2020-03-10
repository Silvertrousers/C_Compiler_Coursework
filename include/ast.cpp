#ifndef ast_cpp
#define ast_cpp
#include <iostream>
#include <string>
#include "ast.hpp"

std::string ast_node::make_mips(symbol_table &table, int &sp, int &fp){

  for(int i=0;i<branches.size();i++){
    if(branches[i] == NULL){
      ast_node * temp = new ast_node("NULL","");
      branches[i] = temp;
    }
  }

  if(node_type == "TRANSLATION_UNIT"){/*std::cout<<node_type<<std::endl;*/

    std::cout<<branches[0]->make_mips(table, sp, fp);
    std::cout<<branches[1]->make_mips(table, sp, fp);

  }

  if(node_type == "EXTERNAL_DECLARATION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "FUNCTION_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(table, sp, fp);//reutrn type
    std::cout<<branches[1]->make_mips(table, sp, fp);//fn name
    //fn name should already be in the stack
    std::cout<<branches[2]->make_mips(table, sp, fp);//arguments
    //assign memory locations to labels has already been done since symbol table keeps track of stack
    std::cout<<branches[3]->make_mips(table, sp, fp);//body
  }

  if(node_type == "STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "LABELED_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DEFAULT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CASE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "COMPOUND_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DECLARATION_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STATEMENT_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "SELECTION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "T_SWITCH"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_IF"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_ELSE"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ITERATION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_FOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_WHILE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_DO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "JUMP_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "GOTO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "RETURN"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "PRIMARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/}

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
      std::cout<<"add r1, ";
      std::cout<<branches[0]->make_mips(table, sp, fp);
      std::cout<<", "<<branches[1]->make_mips(table, sp, fp)<<std::endl;
    }
    if(value == "/"){
      std::cout<<"sub r1, ";
      std::cout<<branches[0]->make_mips(table, sp, fp);
      std::cout<<", "<<branches[1]->make_mips(table, sp, fp)<<std::endl;
    }
    if(value == "%"){
      std::cout<<" r1, ";
      std::cout<<branches[0]->make_mips(table, sp, fp);
      std::cout<<", "<<branches[1]->make_mips(table, sp, fp)<<std::endl;
    }
  }
  if(node_type == "ADDITIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "+"){
      std::cout<<"add r1, ";
      std::cout<<branches[0]->make_mips(table, sp, fp);
      std::cout<<", "<<branches[1]->make_mips(table, sp, fp)<<std::endl;
    }
    if(value == "-"){
      std::cout<<"sub r1, ";
      std::cout<<branches[0]->make_mips(table, sp, fp);
      std::cout<<", "<<branches[1]->make_mips(table, sp, fp)<<std::endl;
    }
    return "r1";
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
  }
  if(node_type == "ASSIGNMENT_OPERATOR"){/*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "CONSTANT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/

    symbol s;
    s.name = branches[1]->branches[0]->value;
    s.type = "int";
    s.value = branches[1]->branches[1]->value
    table.insert(s);
  }
  if(node_type == "DECLARATION_SPECIFIERS"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "INIT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "INIT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
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
  return "r2";
}
#endif
