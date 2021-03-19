//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include "board_factory.hpp"
#include "board_ex.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    try{
        auto board (BoardFactory::GetBoard(PROLIFIC));
        auto switches = board->GetSwitches();
        cout << board->GetNumberOfSwitches() << endl;
        for(Switch * relay : switches){
            relay->SetStatus(ON);
        };
    }
    catch (BoardEx ex){
        cout << ex.what() << endl;
    }
    return 0;
}
