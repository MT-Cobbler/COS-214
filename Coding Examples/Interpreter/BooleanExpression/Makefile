CXX=g++
CFLAGS=-I. -Wall
TARGET=Interpreter
OBJS= Context.o BooleanExpression.o VariableExpression.o OrExpression.o AndExpression.o NotExpression.o Constant.o Interpreter.o  

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
    
clean:
	rm -f $(TARGET) $(OBJS)
    