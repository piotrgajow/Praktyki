#include "checkbuttonpressed.h"

bool CheckButtonPressed::getSaveToFileStatus()
{
    return saveToFileStatus;
}

CheckButtonPressed::CheckButtonPressed()
{
    loopStatus = false;
    saveToFileStatus = false;
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
    else if(GetAsyncKeyState(VK_SPACE))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
    else if(GetAsyncKeyState(VK_ADD))
    {
        howManySec*=2;
        std::cout<<howManySec;
    }
    else if(GetAsyncKeyState(VK_SUBTRACT))
    {
        howManySec/=2;
        std::cout<<howManySec;
    }
    else if(GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(0x53))
    {
        saveToFileStatus = true;
    }
}


bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
