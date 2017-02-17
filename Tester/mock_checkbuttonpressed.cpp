#include "mock_checkbuttonpressed.h"

Mock_checkbuttonpressed::Mock_checkbuttonpressed()
{
    exit = 0;
}

void Mock_checkbuttonpressed::checkStatusOfButtonPressed(){
    if(GetAsyncKeyState(VK_ESCAPE)){
        exit = 1;
    }
    else if(GetAsyncKeyState(VK_SPACE)){
        incrementLoopStatus = !incrementLoopStatus;
        Sleep(100);
    }
}
