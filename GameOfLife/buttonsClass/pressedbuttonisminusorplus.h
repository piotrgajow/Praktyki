#ifndef PRESSEDBUTTONISMINUS_H
#define PRESSEDBUTTONISMINUS_H
#include "userinteractionviakeyboard.h"
#include <windows.h>
#include <iostream>

class PressedButtonIsMinusOrPlus
        : public UserInteractionViaKeyboard
{
private:
    float howManySecondToGenerateNextBoard;
public:
    PressedButtonIsMinusOrPlus();
    void actButtonPressed();
    float getHowManySecondToGenerateNextBoard() const;
};

#endif // PRESSEDBUTTONISMINUS_H
