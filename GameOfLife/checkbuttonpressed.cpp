#include "checkbuttonpressed.h"

bool CheckButtonPressed::getSaveToFileStatus()
{
    return saveToFileStatus;
}

void CheckButtonPressed::setSaveToFileStatus(bool value)
{
    saveToFileStatus = value;
}

CheckButtonPressed::CheckButtonPressed()
{
    loopStatus = false;
    saveToFileStatus = false;
    howManySecondToGenerateNextBoard = 1;
}

float CheckButtonPressed::getHowManySecondToGenerateNextBoard()
{
    return howManySecondToGenerateNextBoard;
}

#ifdef _WIN32
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
        howManySecondToGenerateNextBoard/=2;
    }
    else if(GetAsyncKeyState(VK_SUBTRACT))
    {
        howManySecondToGenerateNextBoard*=2;
    }
    else if(GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(0x53))
    {
        saveToFileStatus = true;
    }
}

#elif __linux__

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    int key = getch();
    if(key == 27)
    {
        exit(0);
    }
    else if(key == ' ')
    {
        loopStatus = !loopStatus;
        usleep(100);
    }
    else if(key == '+')
    {
        howManySecondToGenerateNextBoard/=2;
    }
    else if(key == '-')
    {
        howManySecondToGenerateNextBoard*=2;
    }
    else if(key == 's')
    {
        saveToFileStatus = true;
    }
}

#else

#endif

bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
