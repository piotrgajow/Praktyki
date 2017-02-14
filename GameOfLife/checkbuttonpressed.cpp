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
        if (incrementLoopStatus == false)
        {
            incrementLoopStatus = true;
            Sleep(100);
        }
        else if (incrementLoopStatus == true)
        {
            incrementLoopStatus = false;
            Sleep(100);
        }
    }
}

bool CheckButtonPressed::getStatusOfIncrementLoop()
{
    return incrementLoopStatus;
}
