
#include "socket.h"

Networking::MySocket::MySocket(int domain, int service, int protocol, int port, unsigned long host) {

    this->address.sin_family = domain;
    this->address.sin_port = htons(port);
    this->address.sin_addr.s_addr = htonl(host);
    this->connection = socket(domain, service, protocol);

    // binding 
}
