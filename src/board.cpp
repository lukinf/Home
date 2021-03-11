//
//  Board.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"
#include "top.hpp"

Board::Board(){
    std::cout << "Board constructor" << std::endl;
}

void Board::SetLogger(int i){
    std::cout << "Board set logger" << std::endl;
    logger = i;
}

void Board::GetRelays(){
    std::cout << "Board GetRelays" << std::endl;
}

Board::~Board(){
    std::cout << "Board destructor" << std::endl;
}
