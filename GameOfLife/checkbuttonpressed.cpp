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
    if(GetKeyState(VK_SPACE))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
    else if(GetAsyncKeyState(VK_OEM_PLUS))
    {
        howManySec+=1;
        std::cout<<"add "<<howManySec;
    }
    else if(GetAsyncKeyState(VK_OEM_MINUS))
    {
        if (howManySec != 0)
        {
        howManySec-=1;
        }
        std::cout<<"del "<<howManySec;
    }
}

bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
