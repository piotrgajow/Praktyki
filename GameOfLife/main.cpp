#include "board.h"
#include "filler.h"
#include "fillerwithrandomvalues.h"

int main()
{
    Board board;
    FillerWithRandomValues fillRand;
    fillRand.fillBoard(board);
    fillRand.show(board);
    return 0;
}
