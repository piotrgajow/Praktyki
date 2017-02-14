#include "Game.h"

Game::Game()
{
Board board;
CheckButtonPressed newPressed;
FillerWithRandomValues filler;
DisplayGameBoardOnTheCommandLine display;
ConverterBoolBoardToString converter;
Generator generator;
filler.fillBoard(board);

while(1)
    {
    newPressed.checkStatusOfButtonPressed();
    do
    {
        system("cls");
        converter.convertBoolBoardToString((board.getTheBoard()));
        display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
        board = generator.generateNextBoard(board);
        newPressed.checkStatusOfButtonPressed();
        Sleep(1000);
    }
    while (newPressed.getStatusOfIncrementLoop() == true);
    system("pause");
    }
}
