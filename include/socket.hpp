//
//  socket.hpp
//  home
//
//  Created by Lukas Fridl on 23.03.2021.
//

#ifndef socket_hpp
#define socket_hpp

#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "socket_ex.hpp"

class Socket {
public:
    Socket (const int& Port);
    ~Socket();
protected:
    int port;
    struct sockaddr_in socket_server_addr_in ;
    struct sockaddr_in socket_client_addr_in;
};

#endif /* socket_hpp */
