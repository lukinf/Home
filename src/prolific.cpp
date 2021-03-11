//
//  prolific.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "prolific.hpp"
#include "top.hpp"

Prolific::Prolific(){
    std::cout << "Prolific constructor" << std::endl;
    OpenAndCofigureSerialPort();
}

void Prolific::GetRelays(){
    super::GetRelays();
    std::cout << "Prolific GetRelays" << std::endl ;
}

void Prolific::OpenAndCofigureSerialPort(){
    int serial_port = open("/dev/cu.usbserial-210", (O_RDWR | O_NOCTTY | O_NDELAY));
    
    struct termios options;
    tcgetattr(serial_port, &options);
    
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    
    if (tcsetattr(serial_port, TCSANOW, &options) < 0) {
        std::cout << "Errorek :(" << std::endl;
        close(serial_port);
    }
}

Prolific::~Prolific(){
    std::cout << "Prolific destructor" << std::endl;
}
