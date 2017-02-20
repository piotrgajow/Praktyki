#ifndef SYSTEMCOMAND_H
#define SYSTEMCOMAND_H
#include "checkbuttonpressed.h"

class systemComand
{
public:
    systemComand();
    void sleepFunction(bool loopStatus, float howManySec);
    void cleanFunction();
    void systemPause();
};

#endif // SYSTEMCOMAND_H
