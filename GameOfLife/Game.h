#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converterboolboardtostring.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"

class Game
{
public:  
    Game();
    void startInfiniteLoop();

private:
    Board board;
    CheckButtonPressed newPressed;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    ConverterBoolBoardToString converter;
    Generator generator;
};

#endif // GAME_H
