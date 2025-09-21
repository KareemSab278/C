#include <stdio.h>

// you could just use type def instead...
// would recommend enums to use only when you have multiple conditions and it wouldnt be readable everytime.
// also helps with readability and code completion
typedef enum {
    SAT, SUN, MON, TUE, WED, THU, FRI
} DaysOfWeek;

typedef enum {
    ORDERED, SHIPPED, DELIVERED
} OrderStatus;


void enums(){

    DaysOfWeek day = SUN; // you wont need to use enum everytiem then
    printf("today is: %d day of week", day);

    OrderStatus statusOfOrder = SHIPPED;

    printf("%s", (statusOfOrder == SHIPPED) ? "\nstatus: Shipped" : "\nstatus: Lost forever bruv");

}