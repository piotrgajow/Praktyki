#ifndef CONVERTERBOOLBOARDTOSTRINGBOARD_H
#define CONVERTERBOOLBOARDTOSTRINGBOARD_H
#include <vector>
#include <iostream>


class ConverterBoolBoardToCharBoard
{
public:

    std::vector<std::vector<char>> convertBoolBoardToCharBoard(std::vector<std::vector<bool>> theBoard);

 private:
    std::vector<std::vector<bool>> theBoard;
    std::vector<std::vector<char>> charBoard;

};

#endif // CONVERTERBOOLBOARDTOSTRINGBOARD_H
