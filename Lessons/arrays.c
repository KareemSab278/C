#include <stdio.h>

void arraysBAsics();
void userArrInput();
void stringArrays();

void arrays()
{
    // arraysBAsics();
    // userArrInput();
    stringArrays();
}

void stringArrays(){
    // a string is just an arr of chars so hwo do you put a string in an arr? 
    // you make it a mulktidimentional array
    char strArr[][10] = {"uno", "doi", "trei", "patru", "meh"};
    int arrLen = sizeof(strArr) / sizeof(strArr[0]);
    for (int i = 0; i < arrLen - 1; i++)
    {
        printf("%s", strArr[i]);
        printf(", ");
    }
    printf("%s", strArr[arrLen - 1]); // s for str lol not


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
