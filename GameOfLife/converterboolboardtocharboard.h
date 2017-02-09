#ifndef CONVERTERBOOLBOARDTOSTRINGBOARD_H
#define CONVERTERBOOLBOARDTOSTRINGBOARD_H
#include <vector>
#include <iostream>


class ConverterBoolBoardToCharBoard
{

public:
    ConverterBoolBoardToCharBoard(char dead='.', char live="x")
    {
        deadCell=dead;
        liveCell=live;
    }

    std::vector<std::vector<char>> convertBoolBoardToCharBoard(std::vector<std::vector<bool>> theBoard);
private:

   char deadCell, liveCell;
   std::vector<std::vector<bool>> theBoard;
   std::vector<std::vector<char>> charBoard;

};

#endif // CONVERTERBOOLBOARDTOSTRINGBOARD_H
