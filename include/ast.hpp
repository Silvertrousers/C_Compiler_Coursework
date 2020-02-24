#ifndef ast_hpp
#define ast_hpp

#include "ast/ast_expression.hpp"
#include "ast/ast_statement.hpp"
#include "ast/ast_primitives.hpp"
#include "ast/ast_operators.hpp"
#include "ast/ast_unary.hpp"
#include "ast/ast_functions.hpp"

#include "ast_new_node_types/ast_keyword.hpp"
#include "ast_new_node_types/ast_identifier.hpp"
#include "ast_new_node_types/ast_constant.hpp"
#include "ast_new_node_types/ast_string_literal.hpp"
#include "ast_new_node_types/ast_operator.hpp"
#include "ast_new_node_types/ast_punctuator.hpp"

extern const Statement *parseAST();

class ast_node {
private:
  /* data */

public:
  std::string node_type;
  std::string value;
  std::vector<ast_node*> branches;
  ast_node (arguments);
  virtual ~name_t ();
};

#endif
