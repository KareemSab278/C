#include <stdio.h>
int increment(int* val);
void pointers(){
    int address = 123;

    int *pAddress = &address;

    printf("%p", pAddress);
    printf("\n%d", (*pAddress));
    printf("\n%d", increment(pAddress));
}

int increment(int* val){
    return (*val)++;
};