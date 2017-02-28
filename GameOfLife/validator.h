#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <string>
#include "size.h"

int const frame = 2;

class Validator
{
public:
    Validator();
    bool validate(std::string);
    void CouterOfFirstLineWidth(std::__cxx11::string readString, int &lineWidth);

    Size getSizeOfBoard() const;

    std::string getErrorMessage() const;

private:
    Size * sizeOfBoard;
    std::string errorMessage;
};

#endif // VALIDATOR_H
