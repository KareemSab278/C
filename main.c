#include <stdio.h> // this is for input and output functions
#include <stdbool.h> // this allows us to use true/false booleans

// apparently this is the main file for the project
// ctrl alt n to run code

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

int main()
{

    printf("my first ever print in c!\n"); // print function

    char simpleChar = 'A';
    printf("displaying simpleChars value: %c\n", simpleChar);

    char name[] = "kareem";                                 // so this is how you declare a string in c...... wtf?
    printf("%s is the person who wrote this code\n", name); // how tf do you print this stuff?

    double pi = 3.141592654;
    printf("the value of pi is %lf\n", pi); // long float if you want extra digits

    float gpa = 3.0;
    printf("\nyour gpa is: %.1f", gpa); // print the float but with 1 digit after point

    float temps = 22.6;
    printf("\ntemps are %.1f°\n", temps); // alt + 0176 to get °

    bool isOnline = true;
    if (isOnline){
        printf("True");
    }
    else {
        printf("False");
    };
    

    return 0; // return 0 indicates that the program ended successfully
}