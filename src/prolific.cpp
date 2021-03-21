//
//  prolific.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "prolific.hpp"
#include "relay.hpp"
#include <iostream>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <unistd.h>

Prolific::Prolific(const int& NumberOfSwitches,const string& SerialPortPath): number_of_switches(NumberOfSwitches), serial_port_path(SerialPortPath){
    InitSwitches();
    OpenAndCofigureSerialPort();
}

void Prolific::OpenAndCofigureSerialPort(){
    serial_port = open(serial_port_path.c_str(), (O_RDWR | O_NOCTTY | O_NDELAY));
    struct termios options;
    tcgetattr(serial_port, &options);
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    if (tcsetattr(serial_port, TCSANOW, &options) < 0) {
        close(serial_port);
        throw BoardEx("Serial port error");
    }
}

void Prolific::InitSwitches(){ 
    for(int i = 0; i < number_of_switches;i++){
        switches.push_back(Relay(i));
    }
}

void Prolific::SendCommand(){
    if(number_of_switches > 32){
        throw BoardEx("Out of size");
    } else {
        bitset<32> bits;
        sort(switches.begin(), switches.end(), [](Switch& lhs,Switch& rhs) {
            return lhs.GetId() < rhs.GetId();
        });
        for (int i = 0; i < switches.size(); i++) {
            bits.set(i, switches[i].GetStatus());
        }
        auto command = bits.to_ulong();
        write(serial_port, &command, 1);
        usleep(wait);
    };
}

Prolific::~Prolific(){
    close(serial_port);
}
