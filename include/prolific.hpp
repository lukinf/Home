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
#include "switch.hpp"
#include "board_ex.hpp"

using namespace std;

class Prolific : public Board
{
public:
    Prolific(const int & NumberOfSwitches);
    string GetBits();
    void SetBits(const string& Bits);
    void OpenAndCofigureSerialPort();
    ~Prolific();
private:
    void InitSwitches();
    int SerialPort;
};

#endif /* prolific_h */
