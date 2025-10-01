#include <stdio.h>
#include <stdbool.h>

// you can use type def for better code readability - DONT FORGET!
typedef struct
{
    char company[25];
    char model[40];
    char color[20];
    long long horsepower; // for really big ahh nums (this is 8 bytes or 64 bits). double an int.
    bool isFourWheel;
}   Car;

void structs()
{
    // they are like objects
    Car fordF150 = {"Ford", "F-150 truck", "pink", 77779892938, true};
    Car fordF150_1 = {"Ford", "F-150_1 truck", "pink", 77779892938, true};
    Car fordF150_2 = {"Ford", "F-150_2 truck", "pink", 77779892938, true};
    // you can even have an array of structs (kinda like json)
    Car cars[] = {fordF150, fordF150_1, fordF150_2}; // or you could just dump the vals in here like in json lol

    printf("The vehicle is a %s %s colored in %s with %lld horsepower. %s", fordF150.company, fordF150.model, fordF150.color, fordF150.horsepower, !fordF150.isFourWheel ? "" : "It is also a 4 wheel drive.");
    // a ternary basically outputs a val and depending on it you gotta put a format specifier in the printf block.
    int arrLen = sizeof(cars) / sizeof(cars[0]);
    for (int i = 0; i < arrLen; i++)
    {
        printf("\n%s - %s - %s - %lld - %s", cars[i].company, cars[i].model, cars[i].color, cars[i].horsepower, !cars[i].isFourWheel ? "" : "It is also a 4 wheel drive.");
    };
};
