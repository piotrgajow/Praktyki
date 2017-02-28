#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converter.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"
#include "systemcommand.h"
#include "savetofilewithnameandtext.h"
#include "readerfromtxtfile.h"
#include "validator.h"
#include "fillerwithvaluesfromtxtfile.h"
#include <conio.h>

class Game
{
public:
    Game();
    
private:
    CheckButtonPressed newPressed;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    SystemCommand command;
    SaveToFileWithNameAndText saveToFile;
    ReaderFromTxtFile readerFromTxtFile;
    Validator validator;
    FillerWithValuesFromTxtFile fillerWithValuesFromTxtFile;

    void startInfiniteLoop();
    int counterOfIterations;
    std::string fileNameToLoad;
};

#endif
