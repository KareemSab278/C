#include <stdio.h>
#include <stdlib.h>

void idiotQuestion(int* param);

void mallocInC(){ // yes yes ik dont use keywords lol
    // so i think malloc is just a way to reserve memory for future use... maybe calloc is calling the memory? and free is clearing the memory? lol idk yet

    // so bro said we should allocate memory using malloc and determine the size of bytes based on input. ok
    int idiots = 0;
    int *pointerToIdiots = &idiots;
    idiotQuestion(pointerToIdiots);
    
                             // 1 byte * 10 idiots = 10 bytes
    int *idiotResults = malloc(sizeof(int) * idiots);
    // returns 3232535, 7656, 9638963, 323244 <- garbage memory

    // calloc is basically yhe same but the values in memory are automatically intiailly set to 0.
    // calloc: int *idiotResults = calloc(idiots, sizeof(int)); <- the data, the size of what data it is. safer too.
    // returns: 0, 0, 0, 0...

    
    // idiotresults in the stack points to memory allocated in the heap
    // you must also always check if the pointer is pointing to memory by checking null. else you get a segmentation fault (annoying).
    if (idiotResults == NULL){
            printf("Failed to ref memory in heap using malloc. Assign memory again:\n");
            idiotQuestion(pointerToIdiots);
    } else {
        printf("You have successfully assigned %d bytes to the heap.\n", sizeof(int) * idiots); 
    }

    // malloc should always have a pointer!
    // once done with the memory you can free it using the pointer:
    free(idiotResults);
    // you must also free the pointer!!!
    printf("Heap cleared.\n");
    idiotResults = NULL; // otherwise you get a dangling pointer.
}

void idiotQuestion(int* param){
    printf("how many idiots at work today?\n");
    scanf("%d", param);
};


// void mallocInC(){
//     // assing num of chars or int
//     char text[] = "Hi! my name is Kareem.\n";

//     // i want to assign it to memory oon the heap for later

//     char *pText = malloc(sizeof(text)); // i could got with just sizeof text because itll give me the size right? lol

//     free(pText);
// }