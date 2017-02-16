#include "checkbuttonpressed.h"

CheckButtonPressed::CheckButtonPressed()
{
   incrementLoopStatus = false;
}

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        exit(0);
    }
    else if(GetAsyncKeyState(VK_SPACE))
    {
        incrementLoopStatus = !incrementLoopStatus;
        Sleep(100);
    }
}

bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
