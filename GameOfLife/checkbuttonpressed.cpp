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
            LoopStatus = !LoopStatus;
            Sleep(100);
    }
}

bool CheckButtonPressed::getStatusOfLoop()
{
    return LoopStatus;
}
