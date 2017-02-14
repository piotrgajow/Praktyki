#include "Game.h"

Game::Game()
{
Board board;
FillerWithRandomValues filler;
DisplayGameBoardOnTheCommandLine display;
ConverterBoolBoardToString converter;
filler.fillBoard(board);
display.displayGameBoardOnTheCommandLine(converter.convertBoolBoardToString((board.getTheBoard())));
Generator generator;
generator.generateNextBoard(board);
display.displayGameBoardOnTheCommandLine((converter.convertBoolBoardToString(generator.generateNextBoard(board).getTheBoard())));



}
