//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "prolific.hpp"

using namespace std;

int main(int argc , char *argv[])
{
    try{
        Prolific board(8, "/dev/cu.usbserial-210");
        auto &switches = board.GetSwitches();
        for(auto &relay : switches){
            relay.SetStatus(OFF);
        };
        board.SendCommand();
    }
    catch (BoardEx ex){
        cerr << ex.what();
    }
    return 0;
}
