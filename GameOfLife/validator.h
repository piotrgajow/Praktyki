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
    bool validateIfStringHasAllLinesEqual(std::string);
    bool validateIfStringHasInvalidCharacters(std::string);
    void couterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth);
    std::string getErrorMessage() const;

private:
    std::string errorMessage;
    std::string lenghtOfLines;
};

#endif
