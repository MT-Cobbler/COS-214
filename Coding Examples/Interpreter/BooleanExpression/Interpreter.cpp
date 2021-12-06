#include <iostream>
#include "VariableExpression.h"
#include "BooleanExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"
#include "NotExpression.h"
#include "Constant.h"

using namespace std;

int main()
{
    BooleanExpression* expression;
    Context context;

    VariableExpression* x = new VariableExpression("X");
    VariableExpression* y = new VariableExpression("Y");
    VariableExpression* z = new VariableExpression("zValue");
    
    expression = new OrExpression(
        new AndExpression (new Constant(true), x),
        new AndExpression (y, new NotExpression(z)));

    context.assign(x,0);
    context.assign(y,0);
    context.assign(z,1);    
	
    bool result = expression->evaluate(context);

    cout << "Overall result is " << (result == 0 ? "false": "true") << endl;

    context.assign(x,true);
    context.assign(y,false);
    context.assign(z,true);    
    
    result = expression->evaluate(context);
    
    cout << "Overall result is " << (result == 0 ? "false": "true") << endl;

	return 0;
}

// Note, the destructors will need to be implemented to delete the expression when delete expression is called.
