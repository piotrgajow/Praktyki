#ifndef GENERATOR_H
#define GENERATOR_H
#include "iteratorOverCells.h"
#include "filler.h"

class Generator
{
public:
    Generator();
    Board generateNewBoard(Board oldBoard);
};

#endif // GENERATOR_H
