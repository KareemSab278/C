#include <stdio.h>
// imports:
#include "Lessons/Lessons.h"
#include "Projects/Projects.h"
#include <winsock2.h>

// use ctrl shift b to compile into exe then type ./learningc in terminal

int main(void) {
    // double result = calculator(26, 20, '+');
    // printf("%f", result);
    // return 0;
    // prototypeFunction();
    // random();
    // loops();
    // rockPaperScissors();
    // arrays();
    // ternaryOperators();
    // typeDefAssignment();
    // enums();
    // structs(); 
    // pointers();
    // file();
    // mallocInC();
    // reallocInC();
    // clockProject();
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        perror("WSAStartup failed");
        exit(EXIT_FAILURE);
    }

    server();

    WSACleanup();
    return 0;
}