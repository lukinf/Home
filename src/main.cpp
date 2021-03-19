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
    auto switches = board->GetSwitches();
    cout << board->GetNumberOfSwitches() << endl;
    
    for(Switch * relay : switches){
        relay->SetStatus(ON);
    };
    
    return 0;
}
