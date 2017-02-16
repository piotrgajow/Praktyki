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
        loopStatus = !loopStatus;
        Sleep(100);
        std::cout<<"coś tam"<<std::endl;
    }
}

bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
