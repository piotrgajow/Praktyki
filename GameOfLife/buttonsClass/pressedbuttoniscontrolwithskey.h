#ifndef PRESSEDBUTTONISCONTROLWITHSKEY_H
#define PRESSEDBUTTONISCONTROLWITHSKEY_H
#include "userinteractionviakeyboard.h"
#include <iostream>

class PressedButtonIsControlWithSKey
        : public UserInteractionViaKeyboard
{
private:
    bool saveToFileStatus;
public:
    PressedButtonIsControlWithSKey();
    void actButtonPressed();
    bool getSaveToFileStatus() const;
    void setSaveToFileStatus(bool value);
};

#endif // PRESSEDBUTTONISCONTROLWITHSKEY_H
