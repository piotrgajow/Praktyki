#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <curses.h>
#else
#endif


#include <iostream>

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
