#include "pressedbuttonisspace.h"

bool PressedButtonIsSpace::getLoopStatus() const
{
    return loopStatus;
}

void PressedButtonIsSpace::setLoopStatus(bool value)
{
    loopStatus = value;
}

PressedButtonIsSpace::PressedButtonIsSpace()
{

}

void PressedButtonIsSpace::actButtonPressed()
{
    loopStatus = !loopStatus;
}
