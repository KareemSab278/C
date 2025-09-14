#include <stdio.h>
// imports:
#include "Lessons/dataTypesAndPrinting.h"
#include "Lessons/userInput.h"
#include "Lessons/mathFunctions.h"
#include "Lessons/calculator.h"

// use ctrl shift b to compile into exe then type ./learningc in terminal

int main(void)
{
    double result = calculator(26, 20, '+');
    printf("%f", result);
    return 0;
};
