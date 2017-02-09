#ifndef FILLEREMPTYBOARD_H
#define FILLEREMPTYBOARD_H
#include "filler.h"
#include <vector>

class FillerEmptyBoard:public virtual Filler
{
public:
    FillerEmptyBoard();
    std::vector<std::vector<bool>> fillWithDeadCells( std::vector<std::vector<bool>> DeadBoard);
};

#endif // FILLEREMPTYBOARD_H
