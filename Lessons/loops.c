#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "random.h"

void loops(void)
{
    // WHILE LOOPS
    // im going to make a nums guessing game from scratch cuz why not bruv
    srand(time(NULL));

    // so i need some vars lol
    int count = 0;
    int guess = 0;
    int randNum = 0;

    // so the user will be asked to guess the num between min and max. if he gets it then he wins.
    // by him i mean me, and by min max i mean 1 and a million. no sleep until i get it lmao

    randNum = rangeFromAndTo(1, 10);

    printf("NUMBER GUESSING GAME BRUV\n\n");

    do
    {
        count++;
        printf("Guess a num between uno e 3ashera init cuz\n");
        scanf("%d", &guess);

        if (guess < randNum)
        {
            printf("too low, try higher fam\n");
        }
        else if (guess > randNum)
        {
            printf("too high. go lower\n");
        };

    } while (guess != randNum);

    printf("you have successfully guessed the num congratulation afghan nation operation. took ya %d times\n", count);
}