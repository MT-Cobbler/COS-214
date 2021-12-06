#include <iostream>
#include <map>
#include "Context.h"

Context::Context(void)
{
}

Context::~Context(void)
{
}

bool Context::lookup(const std::string paramName) const
{    
    if (nameValue.find(paramName) != nameValue.end())
        return nameValue.find(paramName)->second;

    return false;
}

void Context::assign(VariableExpression* anExpression, bool xBoolValue)
{
	nameValue[anExpression->getName()] = xBoolValue;
}


