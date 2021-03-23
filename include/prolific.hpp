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
    Prolific(const int& NumberOfSwitches, const string& SerialPortPath);
    string& GetBits();
    void SetBits(const string& Bits);
    void OpenAndCofigureSerialPort();
    void SendCommand();
    ~Prolific();
private:
    int serial_port;
    int number_of_switches;
    int wait = 0;
    string serial_port_path;
    void InitSwitches();
};

#endif /* prolific_h */
