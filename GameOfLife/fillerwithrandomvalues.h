#ifndef FILLERRANDOMVALUES_H
#define FILLERRANDOMVALUES_H
#include "filler.h"
#include <ctime>
#include <cstdlib>
#include <vector>

class FillerWithRandomValues : public virtual Filler
{
public:
    FillerWithRandomValues();
    std::vector<std::vector<bool>> fillBoardWithRandomBoolValues( std::vector<std::vector<bool>> theBoard);
};

#endif // FILLERRANDOMVALUES_H
