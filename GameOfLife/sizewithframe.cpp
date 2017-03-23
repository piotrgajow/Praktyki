#include "sizewithframe.h"

SizeWithFrame::SizeWithFrame(int newWidth,int newHeight)
{    
    height = newHeight + frame;
    width = newWidth + frame;
}

int SizeWithFrame::counterOfLineWidth(std::string readString)
{
    int lineWidth = 0;
    for(unsigned numberOfSymbolFromReadString = 0;
        numberOfSymbolFromReadString< readString.size();
        numberOfSymbolFromReadString++)
    {
        if(readString[numberOfSymbolFromReadString] == '\n' ) break;
        lineWidth++;
    }
    return lineWidth;
}

int SizeWithFrame::counterOfBoardHeight(std::string readString)
{
    std::istringstream streamReadString(readString);
    std::string token;
    int lineCounter = 0;
    for (readString; std::getline(streamReadString, token); ) {
        lineCounter ++;
    }
    return lineCounter;
}

SizeWithFrame::SizeWithFrame(std::string stringBoard)
{
    width = counterOfLineWidth(stringBoard) + frame;
    height = counterOfBoardHeight(stringBoard) + frame;
}

int SizeWithFrame::getHeight() const
{
    return height;
}

int SizeWithFrame::getWidth() const
{
    return width;
}
