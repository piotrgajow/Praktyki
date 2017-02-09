#ifndef FILLER_H
#define FILLER_H
#include <vector>
#include "board.h"


class Filler
{
public:
Filler();
void fillBoard(Board & board);


protected:
 std::vector<std::vector<bool>> theBoard;
 std::vector<std::vector<bool>> deadBoard;

};

#endif // FILLER_H
