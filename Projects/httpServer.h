#ifndef HTTPSERVER_H

#define HTTPSERVER_H

void showHTML(int clientSocket, const char *filePath);
int server();

#endif