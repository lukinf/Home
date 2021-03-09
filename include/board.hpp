//
//  board.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef board_h
#define board_h

class Board
{
public:
    Board();
    virtual void GetRelays();
    void GetLogger();
    ~Board();
};

#endif /* board_h */
