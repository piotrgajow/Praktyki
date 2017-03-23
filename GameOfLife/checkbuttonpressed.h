#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#ifdef _WIN32
#include <windows.h>
#endif
#include <iostream>
#include <conio.h>

class CheckButtonPressed
{
private:
    bool loopStatus;
    bool saveToFileStatus;
    float howManySecondToGenerateNextBoard;
public:
    CheckButtonPressed();
    void checkStatusOfButtonPressed();
    bool getStatusOfLoop();
    float getHowManySecondToGenerateNextBoard();
    bool getSaveToFileStatus();
    void setSaveToFileStatus(bool value);
};

#endif
