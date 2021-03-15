//
//  prolific.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <unistd.h>
#include <vector>
#include "prolific.hpp"
#include "top.hpp"
#include "switch.hpp"
#include "relay.hpp"

using namespace std;

Prolific::Prolific(){
    cout << "Prolific constructor" << endl;
    OpenAndCofigureSerialPort();
}

vector<Switch*> Prolific::GetSwitches(){
    InitRelays();
    return * Switches;
}

void Prolific::OpenAndCofigureSerialPort(){
    SerialPort = open("/dev/cu.usbserial-410", (O_RDWR | O_NOCTTY | O_NDELAY));
    
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
    
    char command = NULL;
    char * commandPtr = &command;
    
    *commandPtr = 0x50;
    write(SerialPort, commandPtr, 1);
    usleep(500000);
    
    *commandPtr = 0x51;
    write(SerialPort, commandPtr, 1);
    usleep(500000);
    
    bitset <8> data("01111111");
    *commandPtr = data.to_ulong();
    usleep(500000);
    
    write(SerialPort, commandPtr, 1);
    usleep(500000);
}

void Prolific::InitRelays(){
    Switches = new vector<Switch*>();
    for(int i = 0;i < Super::NumberOfSwitches;i++){
        Switch * relay = new Relay();
        Switches->push_back(relay);
    }
}

Prolific::~Prolific(){
    cout << "Prolific destructor" << endl;
    close(SerialPort);
}
