#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H
#include <conio.h>
#include <windows.h>
#include "buttonsClass/userinteractionviakeyboard.h"
#include "buttonsClass/pressedbuttonisspace.h"
#include "buttonsClass/pressedbuttonisesc.h"
#include "buttonsClass/pressedbuttonisminusorplus.h"
#include "buttonsClass/pressedbuttoniscontrolwithskey.h"
#include "buttonsClass/pressedbuttonisother.h"


class CheckButtonPressed
{
private:
    UserInteractionViaKeyboard *keyIsPressed;
    PressedButtonIsSpace space;
    PressedButtonIsEsc esc;
    PressedButtonIsControlWithSKey controlWithSKey;
    PressedButtonIsMinusOrPlus minusOrPlus;
    PressedButtonIsOther other;

public:
    CheckButtonPressed();
    void checkWhatButtonWasPressed();

    unsigned char getKeyboardKey() const;

    PressedButtonIsSpace getSpace() const;
    PressedButtonIsMinusOrPlus getMinusOrPlus() const;
    PressedButtonIsControlWithSKey getControlWithSKey() const;

};

#endif // CHECKBUTTONPRESSED_H
