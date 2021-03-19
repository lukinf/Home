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

Prolific::Prolific(const int& NumberOfSwitches): Board(NumberOfSwitches){
    for (int i = 0;i < number_of_switches;i++){
        bits.append("1");
    }
}

string Prolific::GetBits(){
    return bits;
}

void Prolific::SetBits(const string& Bits){
    bits = Bits;
}

void Prolific::OpenAndCofigureSerialPort(){
    SerialPort = open("/dev/cu.usbserial-110", (O_RDWR | O_NOCTTY | O_NDELAY));
    
    struct termios options;
    tcgetattr(SerialPort, &options);
    
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    
    if (tcsetattr(SerialPort, TCSANOW, &options) < 0) {
        cout << "Err" << endl;
        close(SerialPort);
    } else {
        
    }
}

void Prolific::InitRelays(){
    /*
    switches = new vector<Switch*>();
    for(int i = 0;i < number_of_switches;i++){
        Switch * relay = new Relay(this);
        relay->SetId(i);
        switches->push_back(relay);
    }
     */
}

//void Prolific::SetBits(string bits){
    /*
    this->bits = bits;
    bitset <8> data(this->bits);
    auto hex = data.to_ulong();
    write(SerialPort, &hex, 1);
    usleep(300000);
     */
//}

Prolific::~Prolific(){
    close(SerialPort);
}
