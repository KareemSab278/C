#include <stdio.h>
#include <stdbool.h>


// you can use type def for better code readability - DONT FORGET!
typedef struct {
    char company[25];
    char model[40];
    char color[20];
    long long horsepower; // for really big ahh nums (this is 8 bytes or 64 bits). double an int.
    bool isFourWheel;
} Car;

void structs(){
    // they are like objects
    Car fordF150 = {"Ford", "F-150 truck", "pink", 77779892938, true};
    printf("The vehicle is a %s %s colored in %s with %lld horsepower. %s", fordF150.company, fordF150.model, fordF150.color, fordF150.horsepower, !fordF150.isFourWheel ? "" : "It is also a 4 wheel drive.");
    // a ternary basically outputs a val and depending on it you gotta put a format specifier in the printf block.
};