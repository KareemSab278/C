#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void clockProject()
{
    // im building a clock lol
    // will attempt on my own first before bro shows me
    struct tm *ptr;

    time_t t;

    // okay so i read some docs online and got this lol but now i gotta keep updating it. loop time lol

    // while (t)
    // {
    while(t) {
        t = time(NULL); // apparently this gets the curr time??????

        ptr = localtime(&t);

        char *timeStr = asctime(ptr); // it’s storing a pointer (an address) to the first character of the string that asctime returns.
        timeStr[strcspn(timeStr, "\n")] = '\0';
        printf("\r%s", timeStr);
        fflush(stdout);
        Sleep(1000);
    }
        
    // }
}