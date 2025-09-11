#include <stdio.h>

void userInput(void){
    int age = 0; // dont just declare the type and var. set init value for safety.
    char name[30] = "";
    char fullname[50] = "";
    float money = 0.00;

    printf("enter your age\n");
    scanf("%d", &age);// & basically means 'address of'  in memo 
    
    printf("whats your name?\n");
    scanf("%s", &name);

    getchar(); // add this in if your input isnt showing up or the input field is being skipped - it most likely is an issue with the previous input being on the same line of smthn...
    printf("whats your full name?\n");
    fgets( fullname, sizeof(fullname), stdin);
    printf("fullname is: %s", fullname);


    printf("name is %s\n", name);
    printf("your age is: %d\n", age);
    printf("your full name is: %s\n", fullname);
}