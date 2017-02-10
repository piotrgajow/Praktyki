#include "rules.h"

Rules::Rules()
{

}

bool Rules::applyRules(int neighboursCount, bool cellState)
{
    if (neighboursCount < 2)
        return false;
    else if (neighboursCount == 3)
        return true;
    else if (neighboursCount > 3)
        return false;
    else if (neighboursCount == 2)
    {
        if (cellState)
            return true;
        else
            return false;
    }
}
