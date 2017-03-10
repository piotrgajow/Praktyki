#include "validator.h"

Validator::Validator()
{

}

std::string Validator::getErrorMessage() const
{
    return errorMessage;
}

bool Validator::validateIfStringHasAllLinesLenghtEqual(std::string readString)
{
    errorMessage = "";
    lenghtOfLines = "";
    std::istringstream streamReadString(readString);
    std::string token;
    int lineCounter = 0;
    int bufferLineWidth = 0;
    for (readString; std::getline(streamReadString, token); ) {
        if (bufferLineWidth == 0 )
        {
            bufferLineWidth = token.size();

        }
        if (bufferLineWidth != token.size())
        {
            errorMessage = "\nLines must have the same lenght. \nLenght of lines: \n";
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

bool Validator::validateIfStringHasNotInvalidCharacters(std::string readString)
{
    for(unsigned i = 0; i < readString.size() ; i++)
    {
        if (readString[i] != 'X' && readString[i] != ' ' && readString[i] != '\n')
        {
            errorMessage += "\nGiven File has invalid characters\n";
            return false;
        }
    }
    return true;
}
