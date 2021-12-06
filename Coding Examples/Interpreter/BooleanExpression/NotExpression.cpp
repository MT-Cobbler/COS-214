#include "NotExpression.h"

NotExpression::NotExpression(BooleanExpression* op1)
{
    _operand1 = op1;
}

bool NotExpression::evaluate(Context& aContext)
{
    bool operEval = !_operand1->evaluate(aContext);

    return operEval;
}

NotExpression::~NotExpression(void)
{
}
