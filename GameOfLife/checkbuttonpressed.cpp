#include "checkbuttonpressed.h"

CheckButtonPressed::CheckButtonPressed()
{
    loopStatus = false;
    howManySec = 1;
}

int CheckButtonPressed::getHowManySec()
{
    return howManySec;
}

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    if(GetAsyncKeyState(VK_ESCAPE))
        {
            exit(0);
        }
    else if(GetKeyState(VK_SPACE))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
    else if(GetAsyncKeyState(VK_ADD))
    {
        howManySec*=2;
        std::cout<<howManySec;
    }
    else if(GetAsyncKeyState(VK_DIVIDE))
    {
        howManySec/=2;
        std::cout<<howManySec;
    }
}


bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
