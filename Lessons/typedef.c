#include <stdio.h>

typedef char string[50]; // i made my own string data type thingy
typedef char stringArr[][50];

void typeDefAssignment(){
    string example = "i am a string";
    // printf("%s", example);

    stringArr exampleStrArr = {"im a str", "me too", "who are you?"};
    int arrLen = sizeof(exampleStrArr) / sizeof(exampleStrArr[0]);

    for (int i = 0; i < arrLen; i++)
    {
        printf(" %s", exampleStrArr[i]);
    }
} 