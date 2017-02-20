#ifndef DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#define DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#include <iostream>
#include <string>

class DisplayGameBoardOnTheCommandLine
{
private:
    int coutnerOfIteration;
public:
    DisplayGameBoardOnTheCommandLine();
    void displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard);
};

#endif // DISPLAYGAMEBOARDONTHECOMMANDLINE_H
