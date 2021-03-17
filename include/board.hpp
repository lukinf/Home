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
    void GetLogger();
    void SetLogger(int i);
    int GetNumberOfSwitches();
    void SetNumberOfSwitches(int NumberOfSwitches);
    virtual vector<Switch*> GetSwitches();
    string GetBits();
    virtual void SetBits(string bits);
    virtual ~Board();
protected:
    bool Connected = false;
    int logger;
    int NumberOfSwitches;
    string Bits;
    vector<Switch*> * Switches;
};

#endif /* board_h */
