//
//  main.cpp
//  home
//
//  Prolific & prolific = * new Prolific();
//  return prolific;
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include "prolific.hpp"
#include "board.hpp"
#include "board_factory.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Board * board = BoardFactory::GetBoard(PROLIFIC);
    board->SetNumberOfSwitches(8);
    vector<Switch*> switches = board->GetSwitches();
    
    for(Switch * relay : switches){
        cout << relay->GetStatus() << endl;
    };
    
    delete board;
    return 0;
}
