#include <stdio.h>

void loops(void){
    // WHILE LOOPS
    int number = 0;
    while (number >= 0)
    {
        printf("number is: %f", number);
        --number;
    }
    
    // FOR LOOPS
    for (int i = 0; i < number; i++)
    {
        printf("number is: %f", number);
    }
    

};