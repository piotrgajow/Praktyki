#include "checkbuttonpressed.h"


PressedButtonIsControlWithSKey CheckButtonPressed::getControlWithSKey() const
{
    return controlWithSKey;
}

PressedButtonIsMinusOrPlus CheckButtonPressed::getMinusOrPlus() const
{
    return minusOrPlus;
}

CheckButtonPressed::CheckButtonPressed()
{

}

void CheckButtonPressed::checkWhatButtonWasPressed()
{
    if (GetAsyncKeyState(VK_SPACE))
    {
        Sleep(100);
        keyIsPressed = &space;
    }
    else if (GetAsyncKeyState(VK_ESCAPE))
        keyIsPressed = &esc;

    else if (GetAsyncKeyState(VK_SUBTRACT) || GetAsyncKeyState(VK_ADD))
    {
        keyIsPressed = &minusOrPlus;
    }
    else if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(0x53))
        keyIsPressed = &controlWithSKey;

    else
        keyIsPressed = &other;

    keyIsPressed->actButtonPressed();
}

PressedButtonIsSpace CheckButtonPressed::getSpace() const
{
    return space;
}
