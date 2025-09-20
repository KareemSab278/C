#include <stdio.h>

void arraysBAsics();
void userArrInput();

void arrays()
{
    // arraysBAsics();
    userArrInput();
}

void arraysBAsics()
{
    // arr is a static size data type wof same data type
    // syntax:
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsLen = sizeof(nums) / sizeof(nums[0]);
    // so apparently sizeof doesnt get the length of ther arr but gets the bytes the arr takes in memory...
    // dividing it by a single elem [0] works.
    for (int i = 0; i < numsLen - 1; i++)
    {
        printf("%d", nums[i]);
        printf(", ");
    }
    printf("%d", nums[numsLen - 1]);
}

void userArrInput()
{
    char grades[10] = {'A'};

    printf("%c\n", grades[0]);
    printf("assign a new grade: ");
    scanf("%c", &grades[0]);
    printf("%c", grades[0]);
    
}
