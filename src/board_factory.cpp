//
//  board_factory.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "board_factory.hpp"

BoardFactory::BoardFactory(){
}

unique_ptr<Board> BoardFactory::GetBoard(const BOARD_TYPE& type, const string& serial_port){
    switch (type) {
        case GENERIC:
            throw (BoardEx("Not implmented"));
        case PROLIFIC:
        return make_unique<Prolific>(8, serial_port);
    };
    throw (BoardEx("Wrong type"));
}
