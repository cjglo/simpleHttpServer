#include "main.h"

int main() {

    // declaring socket
    int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

    // error checking
    if(socket_fd < 0) throw std::runtime_error("unspecified error for socket failure");

    



    return 0;
}