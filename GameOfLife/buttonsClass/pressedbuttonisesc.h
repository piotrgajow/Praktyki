#ifndef PRESSEDBUTTONISESC_H
#define PRESSEDBUTTONISESC_H
#include "userinteractionviakeyboard.h"
#include <iostream>

class PressedButtonIsEsc
        : public UserInteractionViaKeyboard
{
public:
    PressedButtonIsEsc();
    void actButtonPressed();

};

#endif // PRESSEDBUTTONISESC_H
