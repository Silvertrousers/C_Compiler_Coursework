#include "ast.hpp"

void ast_node::print_python(ast_node* root_node){
  if(root_node == NULL){
    return;
  }

  switch(node_type){
    case("TRANSLATION_UNIT"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      break;

    case("EXTERNAL_DECLARATION"):
      break;

    case("FUNCTION_DECLARATION"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      root_node->print_python(branches[2]);
      root_node->print_python(branches[3]);
      break;

    case("STATEMENT"):
      break;

    case("LABELED_STATEMENT"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      break;

    case("COMPOUND_STATEMENT"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      break;

    case("DECLARATION_LIST"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      break;

    case("STATEMENT_LIST"):
      root_node->print_python(branches[0]);
      root_node->print_python(branches[1]);
      break;

    case("EXPRESSION_STATEMENT"):
      break;

    case("SELECTION_STATEMENT"):
      root_node->print_python(branches[0]);//if
      root_node->print_python(branches[1]);//expr
      std::cout<<":"<<std::endl;
      root_node->print_python(branches[2]);//statement
      root_node->print_python(branches[3]);//else
      root_node->print_python(branches[4]);//statement
      break;

    case(T_IF):
      std::cout<<"if ";
      break;
      
    case(T_ELSE):
      std::cout<<"else:";
      break;

    case("ITERATION_STATEMENT"):
      root_node->print_python(branches[0]);//while
      root_node->print_python(branches[1]);//expr
      std::cout<<":"<<std:endl;
      root_node->print_python(branches[2]);//body
      break;

    case("T_WHILE"):
      std::cout<<"while "
      break;

    case():
      break;
  }

}
