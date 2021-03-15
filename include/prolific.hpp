//
//  prolific.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef prolific_h
#define prolific_h

#include <vector>
#include "board.hpp"
#include "top.hpp"
#include "switch.hpp"

using namespace std;

class Prolific : public Board
{
public:
    Prolific();
    vector<Switch> GetSwitches();
    void OpenAndCofigureSerialPort();
    ~Prolific();
    typedef const Board Super;
private:
    void InitRelays();
    const int NUMBER_OF_RELAYS = 8;
    int SerialPort;
};

#endif /* prolific_h */
