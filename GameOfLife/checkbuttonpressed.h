#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#include <windows.h>
#include <iostream>

class CheckButtonPressed
{
private:
    bool incrementLoopStatus;
public:
    CheckButtonPressed();
    void checkStatusOfButtonPressed();
    bool getStatusOfIncrementLoop();
};

#endif // CHECKBUTTONPRESSED_H
