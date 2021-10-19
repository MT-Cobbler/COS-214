#include "MoveForward.h"

MoveForward::MoveForward()
{
}

MoveForward::~MoveForward()
{
}

void MoveForward::execute()
{
    getReceiver()->forward();
}

void MoveForward::undo()
{
    getReceiver()->backward();
}