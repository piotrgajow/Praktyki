#ifndef MOCK_CHECKBUTTONPRESSED_H
#define MOCK_CHECKBUTTONPRESSED_H

#include "../GameOfLife/checkbuttonpressed.h"

class Mock_checkbuttonpressed:public CheckButtonPressed
{
private:
    bool incrementLoopStatus;
public:
    bool exit;
    Mock_checkbuttonpressed();
    // void checkStatusOfButtonPressed();
};

#endif // MOCK_CHECKBUTTONPRESSED_H
