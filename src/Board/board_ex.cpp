//
//  board_ex.cpp
//  home
//
//  Created by Lukas Fridl on 16.03.2021.
//

#include "board_ex.hpp"

using namespace std;

BoardEx::BoardEx(const string& msg){
    ErrorMessage = msg;
}

const char* BoardEx::what() const throw()
{
    return ErrorMessage.c_str();
};
