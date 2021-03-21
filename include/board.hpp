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
    Board(const int& NumberOfSwitches);
    const int& GetNumberOfSwitches();
    void SetNumberOfSwitches(const int& NumberOfSwitches);
    const vector<Switch>& GetSwitches();
    void SetSwitches(const vector<Switch>& Switches);
    inline virtual void SendCommand(){};
    ~Board();
protected:
    int number_of_switches;
    vector<Switch> switches;
    virtual void InitSwitches();
};

#endif /* board_h */
