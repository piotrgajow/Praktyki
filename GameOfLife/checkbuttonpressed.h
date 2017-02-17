#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#include <windows.h>
#include <iostream>

class CheckButtonPressed
{
private:
    bool loopStatus;
public:
    CheckButtonPressed();
    void checkStatusOfButtonPressed();
    bool getStatusOfLoop();
};

#endif
