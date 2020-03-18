#ifndef c2python_ast_hpp
#define c2python_ast_hpp
#include <vector>
#include <string>
#include "c2python_symbol_table.hpp"

class c2python_ast_node{
  public:
    std::string node_type;
    std::string value;
    std::vector<std::string> branch_notes;
    std::vector<c2python_ast_node*> branches;

    void print_python(int tab_count, c2python_symbol_table &table);

    c2python_ast_node(std::string _node_type, std::string _value, std::vector<c2python_ast_node*> _branches, std::vector<std::string> _branch_notes){
      node_type = _node_type;
      value = _value;
      branches = _branches;
      branch_notes = _branch_notes;
    }

    c2python_ast_node(std::string _node_type, std::string _value){
      node_type = _node_type;
      value = _value;
      branches = {};
      branch_notes = {};
    }
    ~c2python_ast_node();
};

extern c2python_ast_node *parseAST();

#endif
