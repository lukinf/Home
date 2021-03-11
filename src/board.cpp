//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"
#include "top.hpp"

using namespace std;

Board::Board(){
    cout << "Board constructor" << endl;
}

void Board::SetLogger(int i){
    cout << "Board set logger" << endl;
    logger = i;
}

void Board::GetRelays(){
    cout << "Board GetRelays" << endl;
}

Board::~Board(){
    cout << "Board destructor" << endl;
}
