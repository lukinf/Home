//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"

Board::Board(){
}

void Board::SetLogger(int i){
    logger = i;
}

vector<Switch*> Board::GetSwitches(){
    return * Switches;
};

int Board::GetNumberOfSwitches(){
    return NumberOfSwitches;
}

void Board::SetNumberOfSwitches(int NumberOfSwitches){
    this->NumberOfSwitches = NumberOfSwitches;
    for (int i = 0; i < NumberOfSwitches;i++){
        Bits.append("1");
    }
}

string Board::GetBits(){
    return Bits;
}

void Board::SetBits(string bits){
    Bits = bits;
}

Board::~Board(){
}
