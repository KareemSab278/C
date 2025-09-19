#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int rangeFromAndTo(int low, int high);

void rockPaperScissors()
{
    srand(time(NULL));
    int rock = 1;
    int paper = 2;
    int scissors = 3;

    char playerMove[10] = "";

    int tries = 3;
    int computerScore = 0;
    int humanScore = 0;
    do
    {
        printf("********* Rock Paper Scissors *********\n");
        printf("humans: %d ~~~~ Terminators: %d\n", humanScore, computerScore);
        printf("You have %d tries remaining\n", tries);

        printf("(R)ock? (P)aper? (S)cissors??? Which one will you choose?\n");
        fgets(playerMove, sizeof(playerMove), stdin);
        int computerMove = rangeFromAndTo(1, 3);

        --tries;

        if (strcmp(playerMove, "r\n") == 0 || strcmp(playerMove, "rock\n") == 0)
        {
            if (computerMove == paper)
            {
                computerScore++;
                printf("\npaper beats rock. Terminator wins this round\n\n");
            }
            else if (computerMove == scissors)
            {
                humanScore++;
                printf("\nrock beats scissors. Human wins this round\n\n");
            }
            else if (computerMove == rock)
            {
                printf("\nit was a tie lol\n\n");
            }
        }

        // ==============================================================

        if (strcmp(playerMove, "p\n") == 0 || strcmp(playerMove, "paper\n") == 0)
        {
            if (computerMove == scissors)
            {
                computerScore++;
                printf("\nscissors beats paper. Terminator wins this round\n\n");
            }
            else if (computerMove == rock)
            {
                humanScore++;
                printf("\npaper beats rock. Human wins this round\n\n");
            }
        }

        // ==============================================================
        
        if (strcmp(playerMove, "p\n") == 0 || strcmp(playerMove, "paper\n") == 0)
        {
            if (computerMove == scissors)
            {
                computerScore++;
                printf("\nscissors beats paper. Terminator wins this round\n\n");
            }
            else if (computerMove == rock)
            {
                humanScore++;
                printf("\npaper beats rock. Human wins this round\n\n");
            }
            else if (computerMove == paper)
            {
                printf("\nit was a tie lol\n\n");
            }
        }

    } while (tries > 0);

    if (computerScore > humanScore)
    {
        printf("Terminator Wins\n\n");
    }
    else if (humanScore > computerScore)
    {
        printf("Human Wins\n\n");
    }
    else
    {
        printf("it was a tie. You both suck\n\n");
    }
}