#include <stdio.h>
int increment(int* val);
void pointers(){
    int address = 123;

    int *pAddress = &address;
    // you also dont need to use a pointer. you can just do &address nistead and use it anywhere. 
    // pointers help reduce memory

    printf("%p", pAddress);
    printf("\n%d", (*pAddress));
    printf("\n%d", increment(pAddress));
}

int increment(int* val){
    return (*val)++;
};



// so we start off with declaring a var: int number = 1;
// then if we want to manipulate it later on in memory then we can assign a pointer: int* pNumber = &number;
// if we want to print the number tyhjen we will have to find it in memory: printf("%d", (*pNumber));
// thats it for now. i love pointers already...