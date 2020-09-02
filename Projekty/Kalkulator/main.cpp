#include <iostream>
#include <string>
#include <utility>
#include "calculations.h"

int main() {
    std::string mathOperations;
    std::cout << "Type your math operation. \n";
    std::getline(std::cin, mathOperations);

    calculate(mathOperations);
};