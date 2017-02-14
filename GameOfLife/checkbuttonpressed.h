#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#include <windows.h>
#include <iostream>

class CheckButtonPressed
{
private:
    bool incrementLoopStatus = false;
public:
    CheckButtonPressed();
    void checkStatusOfButtonPressed();
    bool getStatusOfIncrementLoop();
};

#endif // CHECKBUTTONPRESSED_H
