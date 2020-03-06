#ifndef ast_cpp
#define ast_cpp
#include <iostream>
#include <string>
#include "ast.hpp"

void tabs(int n);

void ast_node::print_python(int tab_count, symbol_table& table){
  for(int i=0;i<branches.size();i++){
    if(branches[i] == NULL){
      ast_node * temp = new ast_node("NULL","");
      branches[i] = temp;
    }
  }
  if(node_type == "TRANSLATION_UNIT"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }

  if(node_type == "EXTERNAL_DECLARATION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "FUNCTION_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/

    std::cout<<"def ";
    branches[0]->print_python(tab_count, table);//return type
    branches[1]->print_python(tab_count, table);//fn name
    branches[2]->print_python(tab_count, table);//args
    std::cout<<":"<<std::endl;
    for(int i=0;i<table.symbols.size();i++){
      std::cout<<"global "<<table.symbols[i]<<std::endl;
    }
    branches[3]->print_python(tab_count+1, table);//compound statement
  }

  if(node_type == "STATEMENT"){
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<std::endl;
  }

  if(node_type == "COMPOUND_STATEMENT"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }

  if(node_type == "DECLARATION_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }

  if(node_type == "STATEMENT_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<std::endl;
    branches[1]->print_python(tab_count, table);
    std::cout<<std::endl;
  }

  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "SELECTION_STATEMENT"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);//if
    branches[1]->print_python(tab_count, table);//expr
    std::cout<<":"<<std::endl;
    branches[2]->print_python(tab_count+1, table);//statement
    branches[3]->print_python(tab_count, table);//else
    branches[4]->print_python(tab_count+1, table);//statement
  }

  if(node_type == "T_IF"){

    std::cout<<"if ";
  }

  if(node_type == "T_ELSE"){ std::cout<<"else:";}

  if(node_type == "ITERATION_STATEMENT"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);//while
    branches[1]->print_python(tab_count, table);//expr
    std::cout<<":"<<std::endl;
    branches[2]->print_python(tab_count+1, table);//body
  }

  if(node_type == "T_WHILE"){
    std::cout<<"while ";
  }

  if(node_type == "JUMP_STATEMENT"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
    std::cout<<std::endl;
  }

  if(node_type == "RETURN"){
    std::cout<<std::endl;

    std::cout<<"return ";
  }

  if(node_type == "PRIMARY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(branch_notes[0] == "EXPR"){
      branches[0]->print_python(tab_count, table);
    }
    else{

      std::cout<<" "<<value<<" ";
    }
  }

  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/ std::cout<<" "<<value<<" ";}

  if(node_type == "POSTFIX_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }

  if(node_type == "ARGUMENT_EXPRESSION_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<std::endl;
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
    std::cout<<std::endl;
  }
  if(node_type == "UNARY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "UNARY_OPERATOR"){
    /*std::cout<<node_type<<std::endl;*/

    std::cout<<" "<<value<<" ";
  }
  if(node_type == "CAST_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "MULTIPLICATIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" "<<value<<" ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "ADDITIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" "<<value<<" ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "SHIFT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "RELATIONAL_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" "<<value<<" ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "EQUALITY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" "<<value<<" ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "LOGICAL_AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" "<<value<<" ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "LOGICAL_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" or ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "CONDITIONAL_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ASSIGNMENT_EXPRESSION"){
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
    branches[2]->print_python(tab_count, table);
  }
  if(node_type == "ASSIGNMENT_OPERATOR"){
    std::cout<<" "<<value<<" ";
  }
  if(node_type == "CONSTANT_EXPRESSION"){}
  if(node_type == "EXPR"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" , ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<std::endl;
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
    if(branches[1]->node_type=="IDENTIFIER"){
      std::cout<<" = 0";
      if(tab_count==0){
        table.insert(branches[1]->value);
      }
    }
    std::cout<<std::endl;

  }
  if(node_type == "DECLARATION_SPECIFIERS"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "INIT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    if(tab_count == 0){
      if(branches[1]->node_type == "IDENTIFIER"){
        table.insert(branches[1]->value);
      }
      else{
        table.insert((branches[1]->branches)[1]->value);
      }
    }
    branches[0]->print_python(tab_count, table);
    std::cout<<" , ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "INIT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" = ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "TYPE_SPECIFIER"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "SPECIFIER_QUALIFIER_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<"(";
    branches[1]->print_python(tab_count, table);
    std::cout<<")";
  }
  if(node_type == "PARAMETER_TYPE_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "PARAMETER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" , ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "IDENTIFIER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" , ";
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "IDENTIFIER"){
    std::cout<<" "<<value<<" ";
  }
  if(node_type == "TYPE_NAME"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    branches[1]->print_python(tab_count, table);
  }
  if(node_type == "ABSTRACT_DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_ABSTRACT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<"(";
    branches[1]->print_python(tab_count, table);
    std::cout<<")";
  }
  if(node_type == "INITIALIZER"){
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<"{";
    branches[0]->print_python(tab_count, table);
    std::cout<<"}";
  }
  if(node_type == "INITIALIZER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->print_python(tab_count, table);
    std::cout<<" , ";
    branches[1]->print_python(tab_count, table);
  }
}

void tabs(int n){
  for(int tabs = 0; tabs<n;tabs++){
    std::cout<<"tab";
  }
}
#endif
