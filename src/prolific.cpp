//
//  prolific.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <unistd.h>
#include "prolific.hpp"
#include "top.hpp"

using namespace std;

Prolific::Prolific(){
    cout << "Prolific constructor" << endl;
    OpenAndCofigureSerialPort();
}

void Prolific::GetRelays(){
    Super::GetRelays();
    cout << "Prolific GetRelays" << endl ;
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
    
    command = 0x50;
    write(SerialPort, commandPtr, 1);
    usleep(500000);
    
    command = 0x51;
    write(SerialPort, commandPtr, 1);
    usleep(500000);
    
    bitset <8> data("01111111");
    command = data.to_ulong();
    usleep(500000);
    
    write(SerialPort, commandPtr, 1);
    usleep(500000);
}

Prolific::~Prolific(){
    cout << "Prolific destructor" << endl;
    close(SerialPort);
}
