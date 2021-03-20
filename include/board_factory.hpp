//
//  board_factory.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef board_factory_hpp
#define board_factory_hpp

#include "board.hpp"
#include "board_ex.hpp"
#include "prolific.hpp"

class BoardFactory
{
private:
    BoardFactory();
public:
    static unique_ptr<Board> GetBoard(const board_type& type, const string& serial_port_path);
    ~BoardFactory();
};

#endif /* board_factory_hpp */
