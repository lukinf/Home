//
//  board_factory.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "board_factory.hpp"
#include "board.hpp"
#include "prolific.hpp"
#include "top.hpp"

BoardFactory::BoardFactory(){
    // Constructor
}

Board * BoardFactory::GetBoard(board_type type){
    Board * board;
    switch (type) {
        case PROLIFIC:
            board = new Prolific();
    }
    return board;
}
