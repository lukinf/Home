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
    board->GetSwitches();
    
    delete board;
    return 0;
}
