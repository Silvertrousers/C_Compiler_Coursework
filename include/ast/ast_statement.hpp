#ifndef ast_statement_hpp
#define ast_statement_hpp

#include <string>
#include <iostream>
#include <map>
#include <cmath>
#include <memory>

class Statement;

typedef const Statement *StatementPtr;

class Statement
{
public:
    virtual ~Statement()
    {}

    //! Tell and expression to print itself to the given stream
    virtual void print(std::ostream &dst) const =0;

    //! Evaluate the tree using the given mapping of variables to numbers
    virtual double evaluate(
        const std::map<std::string,double> &bindings
    ) const
    { throw std::runtime_error("Not implemented."); }
};


#endif
