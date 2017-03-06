#include "validator.h"

Validator::Validator()
{

}

void Validator::couterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth)
{
    for(unsigned numberOfSymbolFromReadString = 0; numberOfSymbolFromReadString< readString.size();numberOfSymbolFromReadString++)
    {
        lineWidth++;
        if(readString[numberOfSymbolFromReadString] == '\n' ) break;
    }
}

std::string Validator::getErrorMessage() const
{
    return errorMessage;
}

bool Validator::validateIfStringHasAllLinesEqual(std::__cxx11::string readString)
{
    errorMessage = "";
    std::istringstream streamReadString(readString);
    std::string token;
    int lineCounter = 0;
    int lineWidth = 0;
    int bufferLineWidth = 0;
    couterOfFirstLineWidth(readString, lineWidth);
    for (readString; std::getline(streamReadString, token); ) {
        if (bufferLineWidth == 0 )
        {
            bufferLineWidth = token.size();

        }
        if (bufferLineWidth != token.size())
        {
            errorMessage = "Lines must have this same lenght. \nLenght of lines: \n";
        }
        lenghtOfLines += std::to_string(lineCounter) + ": " + std::to_string(token.size()) +"\n";
        lineCounter ++;
    }

    if(errorMessage.size() != 0)
    {
        errorMessage += lenghtOfLines;
        return false;
    }
    return true;
}
