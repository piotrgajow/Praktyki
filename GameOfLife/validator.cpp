#include "validator.h"

Validator::Validator()
{

}

void Validator::CouterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth)
{
    for(unsigned numberOfSymbolFromReadString = 0; numberOfSymbolFromReadString< readString.size();numberOfSymbolFromReadString++)
    {
        lineWidth++;
        if(readString[numberOfSymbolFromReadString] == '\n' ) break;
    }
}

Size Validator::getSizeOfBoard() const
{
    return *sizeOfBoard;
}

std::string Validator::getErrorMessage() const
{
    return errorMessage;
}

bool Validator::validate(std::__cxx11::string readString)
{
    int lineCounter = 0;
    int lineWidth = 0;
    int bufferLineWidth = 0;
    CouterOfFirstLineWidth(readString, lineWidth);
    for(unsigned numberOfSymbolFromReadString = 0; numberOfSymbolFromReadString< readString.size();numberOfSymbolFromReadString++)
    {
        bufferLineWidth++;
        if(readString[numberOfSymbolFromReadString] == '\n' )
        {
            if(lineWidth != bufferLineWidth)
            {
                errorMessage = "Error in line: " + std::to_string(lineCounter);
                return false;
            }
            bufferLineWidth = 0;
            lineCounter++;
        }
    }
    lineWidth--;
    lineCounter++;
    sizeOfBoard = new Size(lineWidth+frame,lineCounter+frame);
    return true;
}
