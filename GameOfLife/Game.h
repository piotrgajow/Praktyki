#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converterboolboardtostring.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"
#include "systemcomand.h"
#include <conio.h>

class Game
{
public:
    Game();

    void sleepFunction(int howManySec);
    
private:
    Board board;
    CheckButtonPressed newPressed;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    systemComand comand;
    void startInfiniteLoop();
};

#endif
