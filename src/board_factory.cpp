//
//  board_factory.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "board_factory.hpp"

BoardFactory::BoardFactory(){
    
}

unique_ptr<Board> BoardFactory::GetBoard(board_type type){
    switch (type) {
        case PROLIFIC:
        return make_unique<Prolific>(8);
    };
    throw (BoardEx("Wrong type"));
}
