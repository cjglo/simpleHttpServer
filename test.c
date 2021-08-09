

#include "Server.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>


void launch(struct Server *server) {

    char buffer[1000]; // reads in data
    char *hello = "HTTP 200 OK \n Content-Type: text/html\n <html><body><h1>Hello</h1></body></html>"; // not valid, will priont as plain text, but can change for correct display
    int new_socket;
    int address_length = sizeof(server->address);
    
    while(1) {

        printf("==== Waiting for Connection ====");

        new_socket = accept(server->socket, (struct sockaddr *)&server->address, (socklen_t *)&address_length);


        read(new_socket, buffer, 1000);

        printf("%s\n", buffer);

        write(new_socket, hello, strlen(hello));
        close(new_socket);
    }

}


int main() {
    struct Server server = server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY, 8080, 10, &launch);
    server.launch(&server);
}