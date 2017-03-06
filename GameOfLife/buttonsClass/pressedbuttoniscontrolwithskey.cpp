#include "pressedbuttoniscontrolwithskey.h"

bool PressedButtonIsControlWithSKey::getSaveToFileStatus() const
{
    return saveToFileStatus;
}

void PressedButtonIsControlWithSKey::setSaveToFileStatus(bool value)
{
    saveToFileStatus = value;
}

PressedButtonIsControlWithSKey::PressedButtonIsControlWithSKey()
{
    saveToFileStatus = false;
}

void PressedButtonIsControlWithSKey::actButtonPressed()
{
    saveToFileStatus = !saveToFileStatus;
}
