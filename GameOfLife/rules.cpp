#include "rules.h"

Rules::Rules()
{

}

bool Rules::applayRules(int neighboursCount)
{
    if (neighboursCount < 2)
                      return false;
                  else if (neighboursCount == 3)
                      return true;
                  else if (neighboursCount > 3)
                      return false;
}
