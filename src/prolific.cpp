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

Prolific::Prolific(const int& NumberOfSwitches,const string& SerialPortPath): Board(NumberOfSwitches), serial_port_path(SerialPortPath){
    InitSwitches();
    OpenAndCofigureSerialPort();
}

string Prolific::GetBits(){
    return bits;
}

void Prolific::SetBits(const string& Bits){
    bits = Bits;
    bitset <8> data(bits);
    auto hex = data.to_ulong();
    write(serial_port, &hex, 1);
    usleep(300000);
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
        switches.push_back(new Relay(i, this));
    }
}

Prolific::~Prolific(){
    close(serial_port);
}
