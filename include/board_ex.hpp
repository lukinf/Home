//
//  board_ex.hpp
//  home
//
//  Created by Lukas Fridl on 16.03.2021.
//

#ifndef board_ex_hpp
#define board_ex_hpp

#include <string>
#include <exception>

using namespace std;

class BoardEx : virtual public exception
{
public:
    explicit
    BoardEx(const string& msg);
    virtual const char* what() const throw();
protected:
    string ErrorMessage;
};

#endif /* board_ex_hpp */
