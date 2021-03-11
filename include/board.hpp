//
//  board.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef board_h
#define board_h

#include "top.hpp"

class Board
{
public:
    Board();
    virtual void GetRelays();
    void GetLogger();
    void SetLogger(int i);
    ~Board();
protected:
    int logger;
};

#endif /* board_h */
