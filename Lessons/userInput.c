#include <stdio.h>
#include <string.h>


void toUpperCase(char str[]){ // wrote my first reusable function
    for (int i = 0; i < strlen(str)-1; i++)
    {
        str[i] = str[i] - 32;
    };
};

void userInput(void)
{

    // shopping cart

    // item + quant + result
    char item[30] = "";
    printf("what item would you like to buy?\n");
    fgets(item, sizeof(item), stdin); // useful for str

    int ammount = 0;
    printf("how many would you like to buy?\n");
    scanf("%d", &ammount);

    toUpperCase(item);
    float total = 0.45 * ammount;
    
    printf("total is: %f, and you ordered, %s", total, item);
}