#include <stdio.h>
#include <stdbool.h>

void ternaryOperators()
{
    // i mean bruh it basically how it is in js lol
    // (condition) ? returned_true : returned_false;

    // lol

    int x =5; int y=6;
    int max = (x>y) ? x : y; // is x greater than y? if yes return x else y.

    // printf("%d", max);

    bool isActive = true;

    printf("%s", (isActive) ? "user is active" : "user is NOT active"); // like in jsx
}