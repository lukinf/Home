//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include <syslog.h>
#include "prolific.hpp"
#include "board_ex.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    try{
        Prolific board(8, "/dev/cu.usbserial-210");
        auto &switches = board.GetSwitches();
        for(auto &relay : switches){
            relay.SetStatus(ON);
        };
        board.SendCommand();
    }
    catch (BoardEx ex){
        syslog(LOG_ERR, "%s",ex.what());
    }
    return 0;
}
