//
//  board.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef board_h
#define board_h

#include "top.hpp"
#include "switch.hpp"

using namespace std;

class Board
{
public:
    Board();
    void GetLogger();
    void SetLogger(int i);
    virtual vector<Switch> GetSwitches();
    virtual ~Board();
protected:
    bool Connected = false;
    int logger;
    vector<Switch> * Switches;
};

#endif /* board_h */
