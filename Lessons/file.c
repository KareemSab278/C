#include <stdio.h>

int file(){
    FILE *pFile = fopen("Output.txt", "w"); // output and method (write). apparently we need a pointer to the file idk why yet
    // FILE is a data type apparently...

    // text i want to add in:
    char fileText[] = "It worked!";

    // if he file coudltn be written then pFile is going to return null
    if (pFile == NULL){
        printf("error opening the file");
        return 1;    
    }

    fprintf(pFile, "%s", fileText );
    printf("file written into successfully!\n");
    fclose(pFile);


    pFile = fopen("Output.txt", "r");
    char buffer[1024] = {0};
    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }
    
    fclose(pFile); // always close or else it cant be written into by other files.
    return 0; // program ran successfully

}