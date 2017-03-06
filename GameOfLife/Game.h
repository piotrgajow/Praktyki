#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converter.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"
#include "buttonsClass/userinteractionviakeyboard.h"
#include "systemcommand.h"
#include "savetofilewithnameandtext.h"

#include <conio.h>

class Game
{
public:
    Game();
    
private:
    CheckButtonPressed button;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    SystemCommand command;
    SaveToFileWithNameAndText saveToFile;
    void startInfiniteLoop();
    int counterOfIterations;
};

#endif
