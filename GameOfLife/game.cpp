#include "Game.h"

Game::Game()
{
Board board;
FillerWithRandomValues filler;
filler.fillBoard(board);\
TemporaryDisplay display(board.getTheBoard());

//ConverterCharBoardToString converter;
//Converter.convertBoolBoardToString(board.theBoard);
//DisplayGameBoardOnTheCommandLine display;
//display(converter.boardConvertToString);



}
