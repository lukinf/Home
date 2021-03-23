//
//  socket_ex.hpp
//  home
//
//  Created by Lukas Fridl on 23.03.2021.
//

#ifndef socket_ex_hpp
#define socket_ex_hpp

#include <string>
#include <exception>

using namespace std;

class SocketEx : virtual public exception
{
public:
    explicit
    SocketEx(const string& msg);
    virtual const char* what() const throw();
protected:
    string ErrorMessage;
};

#endif /* socket_ex_hpp */
