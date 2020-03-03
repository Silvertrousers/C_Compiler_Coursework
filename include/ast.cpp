#include "ast.hpp"
#include <iostream>
#include <string>

void ast_node::print_python(ast_node* root_node){
  if(root_node == NULL){
    return;
  }


  if(node_type == "TRANSLATION_UNIT"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
  }

  if(node_type == "EXTERNAL_DECLARATION"){}

  if(node_type == "FUNCTION_DECLARATION"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
    root_node->print_python(branches[2]);
    root_node->print_python(branches[3]);
  }

  if(node_type == "STATEMENT"){}

  if(node_type == "LABELED_STATEMENT"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
  }

  if(node_type == "COMPOUND_STATEMENT"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
  }

  if(node_type == "DECLARATION_LIST"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
  }

  if(node_type == "STATEMENT_LIST"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
  }

  if(node_type == "EXPRESSION_STATEMENT"){}

  if(node_type == "SELECTION_STATEMENT"){
    root_node->print_python(branches[0]);//if
    root_node->print_python(branches[1]);//expr
    std::cout<<":"<<std::endl;
    root_node->print_python(branches[2]);//statement
    root_node->print_python(branches[3]);//else
    root_node->print_python(branches[4]);//statement
  }

  if(node_type == "T_IF"){ std::cout<<"if "; }

  if(node_type == "T_ELSE"){std::cout<<"else:";}

  if(node_type == "ITERATION_STATEMENT"){
    root_node->print_python(branches[0]);//while
    root_node->print_python(branches[1]);//expr
    std::cout<<":"<<std::endl;
    root_node->print_python(branches[2]);//body
  }

  if(node_type == "T_WHILE"){
    std::cout<<"while ";
  }

  if(node_type == "JUMP_STATEMENT"){
    root_node->print_python(branches[0]);
    root_node->print_python(branches[1]);
    std::cout<<std::endl;
  }

  if(node_type == "RETURN"){
    std::cout<<"return ";
  }

  if(node_type == "PRIMARY_EXPRESSION"){
    if(branch_notes[0] == "EXPR"){
      root_node->print_python(branches[0]);
    }
    else{
      std::cout<<" "<<value<<" ";
    }
  }

  if(node_type == "CONSTANT"){std::cout<<" "<<value<<" ";}

  // case("POSTFIX_EXPRESSION"):
  //   break;
  // case():
  //   break;
  // case():
  //   break;
  // case():
  //   break;
  // case():
  //   break;
  // case():
  //   break;



}
