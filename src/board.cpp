//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board(const int& NumberOfSwitches): number_of_switches(NumberOfSwitches) {
    number_of_switches = NumberOfSwitches;
}

void Board::InitSwitches(){
    for(int i = 0; i < number_of_switches;i++){
        switches.push_back(Switch(i));
    }
}

const vector<Switch>& Board::GetSwitches(){
    return switches;
};

void Board::SetSwitches(const vector<Switch>& Switches){
    switches = Switches;
};

const int& Board::GetNumberOfSwitches(){
    return number_of_switches;
}

void Board::SetNumberOfSwitches(const int& NumberOfSwitches){
    number_of_switches = NumberOfSwitches;
}

Board::~Board(){
}
