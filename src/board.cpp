//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <vector>
#include "board.hpp"
#include "top.hpp"
#include "switch.hpp"

using namespace std;

Board::Board(){
    cout << "Board constructor" << endl;
}

void Board::SetLogger(int i){
    cout << "Board set logger" << endl;
    logger = i;
}

vector<Switch> Board::GetSwitches(){
    return * Switches;
};

int Board::GetNumberOfSwitches(){
    return NumberOfSwitches;
}

void Board::SetNumberOfSwitches(int NumberOfSwitches){
    NumberOfSwitches = NumberOfSwitches;
}

Board::~Board(){
    cout << "Board destructor" << endl;
}
