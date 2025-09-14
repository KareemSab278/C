#include <stdio.h>

double calculator(double arg1, double arg2, char op) {
    switch (op) {
        case '+': return arg1 + arg2;
        case '-': return arg1 - arg2;
        default:
            printf("That isnt an acceptable argument...\n");
            return 0.00;
    }
}