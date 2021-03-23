//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board() {
}

vector<Switch>& Board::GetSwitches(){
    return switches;
};

void Board::SetSwitches(const vector<Switch>& Switches){
    switches = Switches;
};

Board::~Board(){
}
