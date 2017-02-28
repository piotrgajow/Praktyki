#ifndef DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#define DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#include <iostream>
#include <string>

class DisplayGameBoardOnTheCommandLine
{
public:
    DisplayGameBoardOnTheCommandLine();
    void displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard);
    void displayCounterOnTheCommandLine(int counterOfIterations);
    void displayErrorsCommand(std::string);
};

#endif // DISPLAYGAMEBOARDONTHECOMMANDLINE_H
