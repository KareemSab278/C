#include <stdio.h> // this is for input and output functions

// apparently this is the main file for the project
// ctrl alt n to run code  


int main() {

    printf("my first ever print in c!\n"); // print function

    int age = 25;
    char name[] = "kareem"; // so this is how you declare a string in c...... wtf?
    double funds = 22.66445564; // im broke
    float simpleFunds = (float)funds; // converting double to float

    printf("%d %s %f %g", age, name, funds, simpleFunds); // how tf do you print this stuff?
    // ooooooohhhhhhhhhhhhhh i see...
    
    // %d      → int
    // %i      → int (same as %d)
    // %u      → unsigned int
    // %f      → float/double (prints 6 decimals by default)
    // %g      → float/double (compact, normal or exponential form)
    // %e      → float/double (scientific notation)
    // %c      → char (single character)
    // %s      → string (char*)
    // %p      → pointer (memory address)
    // %%      → literal % (prints a % sign)


    return 0; // return 0 indicates that the program ended successfully
}