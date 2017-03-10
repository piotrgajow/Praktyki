#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <string>
#include "sizewithframe.h"
#include <fstream>
#include <sstream>


class Validator
{
public:
    Validator();
    bool validateIfStringHasAllLinesLenghtEqual(std::string);
    bool validateIfStringHasNotInvalidCharacters(std::string);
    std::string getErrorMessage() const;

private:
    std::string errorMessage;
    std::string lenghtOfLines;
};

#endif
