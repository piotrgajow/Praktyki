#ifndef PRESSEDBUTTONISSPACE_H
#define PRESSEDBUTTONISSPACE_H
#include "userinteractionviakeyboard.h"
#include <iostream>

class PressedButtonIsSpace
        : public UserInteractionViaKeyboard
{
private:
    bool loopStatus = false;
public:
    PressedButtonIsSpace();
    void actButtonPressed();

    bool getLoopStatus() const;
    void setLoopStatus(bool value);
};

#endif // PRESSEDBUTTONISSPACE_H
