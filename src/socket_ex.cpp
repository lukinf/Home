//
//  socket_ex.cpp
//  home
//
//  Created by Lukas Fridl on 23.03.2021.
//

#include "socket_ex.hpp"

using namespace std;

SocketEx::SocketEx(const string& msg){
    ErrorMessage = msg;
}

const char* SocketEx::what() const throw()
{
    return ErrorMessage.c_str();
};
