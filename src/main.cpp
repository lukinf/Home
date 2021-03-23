//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include "prolific.hpp"
#include "socket.hpp"

using namespace std;

int main(int argc , char *argv[])
{
    try{
        Socket server(5000);
        Prolific board(8, "/dev/cu.usbserial-210");
        auto &switches = board.GetSwitches();
        for(auto &relay : switches){
            relay.SetStatus(OFF);
        };
        board.SendCommand();
    }
    catch (const BoardEx& ex){
        cerr << ex.what();
        return 1;
    }
    catch (const SocketEx& ex){
        cerr << ex.what();
        return 1;
    }
    return 0;
}
