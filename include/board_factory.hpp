//
//  board_factory.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef board_factory_hpp
#define board_factory_hpp

#include "top.hpp"
#include "board.hpp"

class BoardFactory
{
public:
    BoardFactory();
    static Board * GetBoard(board_type type);
    static Board GetBoardStack(const board_type type);
    ~BoardFactory();
};

#endif /* board_factory_hpp */
