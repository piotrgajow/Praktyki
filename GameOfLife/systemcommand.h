#ifndef SYSTEMCOMAND_H
#define SYSTEMCOMAND_H
#include "checkbuttonpressed.h"

class SystemCommand
{
private:
    bool loopStatus;

public:
    SystemCommand();
    void waitAsLongAsDeclaredToGenerateTheNextBoard(float howManySecondToGenerateNextBoard);
    void cleanCommandPromptFunction();
    void systemPause();
    bool getLoopStatus() const;
    void setLoopStatus(bool value);
};

#endif
