#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#include <ncurses.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

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
