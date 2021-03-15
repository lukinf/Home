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
    int GetNumberOfSwitches();
    void SetNumberOfSwitches(int NumberOfSwitches);
    virtual vector<Switch> GetSwitches();
    virtual ~Board();
protected:
    bool Connected = false;
    int logger;
    vector<Switch> * Switches;
    int NumberOfSwitches;
};

#endif /* board_h */
