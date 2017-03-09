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
    initscr();
    noecho();
    cbreak();
}

float CheckButtonPressed::getHowManySecondToGenerateNextBoard()
{
    return howManySecondToGenerateNextBoard;
}

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    int key = getch();
    if(key == 27))
    {
        exit(0);
    }
    else if(key == ' '))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
    else if(key == '+'))
    {
        howManySecondToGenerateNextBoard/=2;
    }
    else if(key == '-'))
    {
        howManySecondToGenerateNextBoard*=2;
    }
    else if(key == 's')
    {
        saveToFileStatus = true;
    }
}


bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
