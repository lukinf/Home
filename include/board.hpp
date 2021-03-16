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
    virtual ~Board();
protected:
    bool Connected = false;
    int logger;
    int NumberOfSwitches;
    vector<Switch*> * Switches;
};

#endif /* board_h */
