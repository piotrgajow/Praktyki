#include "checkbuttonpressed.h"

CheckButtonPressed::CheckButtonPressed()
{
   loopStatus = false;
}

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        exit(0);
    }
    else if(GetAsyncKeyState(VK_SPACE))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
}

bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
