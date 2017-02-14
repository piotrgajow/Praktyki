#include "checkbuttonpressed.h"

CheckButtonPressed::CheckButtonPressed()
{

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

bool CheckButtonPressed::getStatusOfIncrementLoop()
{
    return incrementLoopStatus;
}
