#include "AndExpression.h"

AndExpression::AndExpression(BooleanExpression* op1, BooleanExpression* op2)
{
    _operand1 = op1;
    _operand2 = op2;
}

AndExpression::~AndExpression(void)
{
}

bool AndExpression::evaluate(Context& aContext)
{
    bool oper1Eval = _operand1->evaluate(aContext);
    bool oper2Eval = _operand2->evaluate(aContext);

    return oper1Eval && oper2Eval;
}
