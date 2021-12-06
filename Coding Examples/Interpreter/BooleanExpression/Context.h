#ifndef CONTEXT_H
#define CONTEXT_H

#include <map>
#include <string>
#include "VariableExpression.h"

class VariableExpression;

class Context
{
public:
    explicit Context(void);
    virtual ~Context(void);

    bool lookup(const std::string) const;
    void assign(VariableExpression*, bool);

private:
    std::map<std::string, bool> nameValue;
    
};
#endif
