#include "pressedbuttonisminus.h"

float PressedButtonIsMinusOrPlus::getHowManySecondToGenerateNextBoard() const
{
    return howManySecondToGenerateNextBoard;
}

PressedButtonIsMinusOrPlus::PressedButtonIsMinusOrPlus()
{
 howManySecondToGenerateNextBoard = 1000;
}

void PressedButtonIsMinusOrPlus::actButtonPressed()
{
    if (GetAsyncKeyState(VK_ADD))
    {
        howManySecondToGenerateNextBoard /= 2;
        Sleep(100);

    }
    else if (GetAsyncKeyState(VK_SUBTRACT))
    {
        howManySecondToGenerateNextBoard *= 2;
        Sleep(100);
    }
}
