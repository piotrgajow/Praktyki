#include "systemcomand.h"

systemComand::systemComand()
{

}

void systemComand::sleepFunction(bool loopStatus, float howManySec)
{
    if (loopStatus == true)
    {
         Sleep(howManySec*1000);
    }
}

void systemComand::cleanFunction()
{
    system("cls");
}

void systemComand::systemPause()
{
    system("pause");
}
