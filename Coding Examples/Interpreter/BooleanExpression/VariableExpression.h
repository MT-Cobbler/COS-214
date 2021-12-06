#ifndef VARIABLEEXPRESSION_H
#define VARIABLEEXPRESSION_H

#include <string>
#include "BooleanExpression.h"
#include "Context.h"

class Context;

class VariableExpression : public BooleanExpression
{
public:
    explicit VariableExpression(const std::string);
    virtual ~VariableExpression();

    virtual bool evaluate(Context&);
    std::string getName();

private:
    std::string _name;
};
#endif
