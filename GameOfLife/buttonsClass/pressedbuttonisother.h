#ifndef PRESSEDBUTTONISOTHER_H
#define PRESSEDBUTTONISOTHER_H
#include "userinteractionviakeyboard.h"
#include <iostream>

class PressedButtonIsOther
        : public UserInteractionViaKeyboard
{
public:
    PressedButtonIsOther();
    void actButtonPressed();
};

#endif // PRESSEDBUTTONISOTHER_H
