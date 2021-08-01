#ifndef SOCKET_H
#define SOCKET_H

#include <sys/socket.h>
#include <netinet/in.h>

namespace Networking {

    class MySocket {

        public:
        MySocket(int domain, int service, int protocol, int port, unsigned long host);

        private:
        struct sockaddr_in address;
        int connection;
    };

}




#endif