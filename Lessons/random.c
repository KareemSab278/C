#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rangeFromAndTo(int low, int high);

void random(void)
{   
    // srand (seed random)
    srand(time(NULL)); // uses time as a seed. this is not truly random...

    int randomNum = (rand() % 2); // gives me 0 or 1

    int seedBased = rand(); // output based on time seed

    printf("%d", rangeFromAndTo(50, 100));

    // tomorrow i wanna write a loop that basically keeps asking you to guess the random number until you get it right, and the loop breaks.
}

int rangeFromAndTo(int low, int high)
{
    return (rand() % (high - low + 1)) + low; // this random function sucks. try using Mersenne Twister
}