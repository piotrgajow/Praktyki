#ifndef FILLERWITHRANDOMVALUES_H
#define FILLERWITHRANDOMVALUES_H
#include "filler.h"
#include <vector>
#include <ctime>
#include <cstdlib>

class FillerWithRandomValues:public virtual Filler
{
public:
    FillerWithRandomValues();
    void fillBoard();
};

#endif
