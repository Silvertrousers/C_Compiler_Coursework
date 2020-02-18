#ifndef ast_hpp
#define ast_hpp

#include "ast/ast_expression.hpp"
#include "ast/ast_primitives.hpp"
#include "ast/ast_operators.hpp"
#include "ast/ast_unary.hpp"
#include "ast/ast_functions.hpp"

#include "ast/ast_keyword.hpp"
#include "ast/ast_identifier.hpp"
#include "ast/ast_constant.hpp"
#include "ast/ast_string_literal.hpp"
#include "ast/ast_operator.hpp"
#include "ast/ast_punctuator.hpp"

extern const Expression *parseAST();

#endif
