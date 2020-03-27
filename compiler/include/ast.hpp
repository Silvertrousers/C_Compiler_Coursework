#ifndef ast_hpp
#define ast_hpp
#include <vector>
#include <string>
#include "symbol_table.hpp"

class ast_node{

  public:
    std::string node_type;
    std::string value;
    std::vector<std::string> branch_notes;
    std::vector<ast_node*> branches;

    void print_python(int tab_count, symbol_table &table);
    std::string make_mips(symbol_table &table, int &sp, int &fp); // the string returned is the name of the locations on memory where result of operation is stored so x is the var name and will be returned
    int eval_expr(symbol_table table);
    ast_node(std::string _node_type, std::string _value, std::vector<ast_node*> _branches, std::vector<std::string> _branch_notes){
      node_type = _node_type;
      value = _value;
      branches = _branches;
      branch_notes = _branch_notes;
    }

    ast_node(std::string _node_type, std::string _value){
      node_type = _node_type;
      value = _value;
      branches = {};
      branch_notes = {};
    }
    ~ast_node();
};

extern ast_node *parseAST();

#endif
