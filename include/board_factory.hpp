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
#include "board_ex.hpp"
#include "prolific.hpp"

class BoardFactory
{
private:
    BoardFactory();
public:
    static unique_ptr<Board> GetBoard(board_type type);
    ~BoardFactory();
};

#endif /* board_factory_hpp */
