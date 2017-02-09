#include "Game.h"

Game::Game()
{
Board board;
FillerWithRandomValues filler;
filler.fillBoard(&board);
ConverterCharBoardToString converter;
Converter.convertBoolBoardToString(board.theBoard);
DisplayGameBoardOnTheCommandLine display;
display(converter.boardConvertToString);

}
