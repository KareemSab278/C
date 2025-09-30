#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reallocInC()
{
    // need num of prices
    int prices = 0;
    int newPrices = 0;
    printf("Please input how many prices you need on the system today: \n");
    scanf("%d", &prices);

    // need memory for prices on heap and avoid segfault
    int *pPrices = calloc(prices, sizeof(int));
    printf("Memory allocated: %d\n", prices * sizeof(*pPrices));
    if (pPrices == NULL)
    {
        printf("Pre seg fault spotted. Opinion rejected\n");
    }

    // reallocate memory to diff size
    printf("Would you like to set the number of prices to something different? (y,n)\n");
    char response;
    scanf(" %c", &response);
    while (response != 'n')
    {
        if (response == 'y')
        {
            printf("Please input how many new prices you need on the system today: \n");
            scanf("%d", &newPrices);

            int *temp = realloc(pPrices, newPrices * sizeof(int)); // *temp is common practice
            pPrices = temp; // we are reallocating the memory into prices directly
            prices = newPrices; // lol i forgor to reassign prices
            break; // reassigning the memory vals appropriately
        }
    }

    // need to free memory and pntr
    printf("Memory allocated: %d\n", prices * sizeof(*pPrices)); // so apparently you can use the pointer if you dont know the type def
    free(pPrices);
    pPrices = NULL;
    prices = 0;
    if (pPrices == NULL)
    {
        printf("Memory and pointer cleared\n");
        printf("Memory allocated: %d\n", prices * sizeof(*pPrices));
    }
    else
    {
        printf("Memory clearing failed");
    }
}