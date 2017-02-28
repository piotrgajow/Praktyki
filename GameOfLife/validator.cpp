#include "validator.h"

Validator::Validator()
{

}

void Validator::CouterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth)
{
    for(unsigned i = 0; i< readString.size();i++)
    {
        lineWidth++;
        if(readString[i] == '\n' ) break;
    }
}

Size Validator::getSizeOfBoard() const
{
    return *sizeOfBoard;
}

bool Validator::validate(std::__cxx11::string readString)
{
    int lineCounter = 0;
    int lineWidth = 0;
    int bufferLineWidth = 0;
    CouterOfFirstLineWidth(readString, lineWidth);
    for(unsigned i = 0; i< readString.size();i++)
    {
        bufferLineWidth++;

        if(readString[i] == '\n' )
        {
            if(lineWidth != bufferLineWidth)
            {
                errorMessage = "Error in line: " + std::to_string(lineCounter);
                return false;
            }
            bufferLineWidth = 0;
        }
        lineCounter++;
    }
    sizeOfBoard = new Size(lineWidth+frame,lineCounter+frame);
    return true;
}
