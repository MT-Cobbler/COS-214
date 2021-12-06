#include "OrExpression.h"

class Context;

OrExpression::OrExpression(BooleanExpression* op1, BooleanExpression* op2)
{
    _operand1 = op1;
    _operand2 = op2;
}

bool OrExpression::evaluate(Context& aContext)
{
    bool oper1Eval = _operand1->evaluate(aContext);
    bool oper2Eval = _operand2->evaluate(aContext);

    return oper1Eval || oper2Eval;
}

OrExpression::~OrExpression(void)
{
}
