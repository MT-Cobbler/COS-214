#include "MoveBackward.h"

MoveBackward::MoveBackward()
{
}

MoveBackward::~MoveBackward()
{
}

void MoveBackward::execute()
{
    getReceiver()->backward();
}

void MoveBackward::undo()
{
    getReceiver()->forward();
}