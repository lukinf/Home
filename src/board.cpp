//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board(const int& NumberOfSwitches) {
    cout << "Board created" << endl;
    number_of_switches = NumberOfSwitches;
}

void Board::InitSwitches(){
    for(int i = 0; i < number_of_switches;i++){
        switches.push_back(new Switch(i));
    }
}

vector<Switch*> Board::GetSwitches(){
    return switches;
};

int Board::GetNumberOfSwitches(){
    return number_of_switches;
}

void Board::SetNumberOfSwitches(const int& NumberOfSwitches){
    number_of_switches = NumberOfSwitches;
}

Board::~Board(){
    for(Switch * board_switch : switches){
        delete board_switch;
    };
    cout << "Board deleted" << endl;
}
