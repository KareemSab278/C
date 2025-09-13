#include <stdio.h>
#include <math.h>

void mathFunctions(void)
{
    double x = 9.0, y = 2.0;

    // Power & roots
    printf("sqrt(x) = %f\n", sqrt(x));
    printf("pow(x,y) = %f\n", pow(x,y));
    printf("cbrt(x) = %f\n", cbrt(x));

    // Trig
    printf("sin(x) = %f\n", sin(x));
    printf("cos(x) = %f\n", cos(x));
    printf("tan(x) = %f\n", tan(x));

    // Log & exp
    printf("exp(y) = %f\n", exp(y));
    printf("log(x) = %f\n", log(x));
    printf("log10(x) = %f\n", log10(x));

    // Rounding
    printf("ceil(x) = %f\n", ceil(x));
    printf("floor(x) = %f\n", floor(x));
    printf("round(x) = %f\n", round(x));

    // Misc
    printf("fabs(-x) = %f\n", fabs(-x));
    printf("fmod(x,y) = %f\n", fmod(x,y));
    printf("fmax(x,y) = %f\n", fmax(x,y));
    printf("fmin(x,y) = %f\n", fmin(x,y));

    // I dont think I'll ever need these lol but ok...

}