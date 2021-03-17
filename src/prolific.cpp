//
//  prolific.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "prolific.hpp"
#include <iostream>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <unistd.h>
#include "enums.hpp"

Prolific::Prolific(){
    OpenAndCofigureSerialPort();
}

vector<Switch*> Prolific::GetSwitches(){
    InitRelays();
    return * Switches;
}

void Prolific::OpenAndCofigureSerialPort(){
    SerialPort = open("/dev/cu.usbserial-110", (O_RDWR | O_NOCTTY | O_NDELAY));
    
    struct termios options;
    tcgetattr(SerialPort, &options);
    
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    
    if (tcsetattr(SerialPort, TCSANOW, &options) < 0) {
        cout << "Err" << endl;
        Super::Connected = false;
        close(SerialPort);
    } else {
        Super::Connected = true;
    }
}

void Prolific::InitRelays(){
    Switches = new vector<Switch*>();
    for(int i = 0;i < Super::NumberOfSwitches;i++){
        Switch * relay = new Relay(this);
        relay->SetId(i);
        Switches->push_back(relay);
    }
}

void Prolific::SetBits(string bits){
    this->Bits = bits;
    bitset <8> data(this->Bits);
    auto hex = data.to_ulong();
    unsigned long * commandPtr = &hex;
    write(SerialPort, commandPtr, 1);
    usleep(500000);
}

Prolific::~Prolific(){
    close(SerialPort);
}
