#include <iostream>
#include <string>
#include "VariableExpression.h"

VariableExpression::VariableExpression(const std::string name)
{
    _name = name;
}

VariableExpression::~VariableExpression(void)
{
}

bool VariableExpression::evaluate(Context& aContext)
{
    return aContext.lookup(_name);
}

std::string VariableExpression::getName()
{
    return _name;
}
