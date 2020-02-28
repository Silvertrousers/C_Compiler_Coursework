#ifndef ast_hpp
#define ast_hpp

#include <vector>
#include <string>

class ast_node{

  public:
    std::string node_type;
    std::string value;
    std::vector<std::string> branch_notes;
    std::vector<ast_node*> branches;

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

extern const ast_node *parseAST();
//
// ast_node::ast_node(std::string _node_type, std::string _value, std::vector<ast_node*> _branches){
//   node_type = _node_type;
//   value = _value;
//   branches = _branches;
// }
//
// ast_node::ast_node(std::string _node_type, std::string _value){
//   node_type = _node_type;
//   value = _value;
//   branches = {};
// }

#endif
