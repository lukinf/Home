//
//  board.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef board_h
#define board_h

#include "switch.hpp"
#include <vector>
#include <string>

using namespace std;

class Board
{
public:
    Board();
    const vector<Switch>& GetSwitches();
    void SetSwitches(const vector<Switch>& Switches);
    ~Board();
protected:
    vector<Switch> switches;
};

#endif /* board_h */
