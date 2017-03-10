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
#include "filenamereader.h"
class Game
{
public:
    Game();    

private:
    CheckButtonPressed newPressed;
    FillerWithRandomValues fillerWithrandomValues;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    SystemCommand command;
    SaveToFileWithNameAndText saveToFile;
    ReaderFromTxtFile readerFromTxtFile;
    Validator validator;
    FillerWithValuesFromTxtFile fillerWithValuesFromTxtFile;
    FilenameReader nameOfFile;
    void startInfiniteLoop();
    int counterOfIterations;
    SizeWithFrame * sizeOfBoardPlusFrame;
    Board * board;
    void LoadBoardFromTxtFile();
    void FillBoardIfValidated();
    void generateRandomBoard();
    void showOptions();
    void displayCurrentBoard();
};

#endif
