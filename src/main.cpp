//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include "board_factory.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    auto board (BoardFactory::GetBoard(PROLIFIC));
    board->SetNumberOfSwitches(8);
    auto switches = board->GetSwitches();
    
    for(Switch * relay : switches){
        relay->SetStatus(ON);
        cout << relay->GetStatus() << endl;
        relay->SetStatus(OFF);
        cout << relay->GetStatus() << endl;
    };
    
    return 0;
}
