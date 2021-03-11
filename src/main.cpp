//
//  main.cpp
//  home
//
//  Prolific & prolific = * new Prolific();
//  return prolific;
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include "prolific.hpp"
#include "board.hpp"
#include "board_factory.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    Board * board = BoardFactory::GetBoard(PROLIFIC);
    board->GetRelays();
    
    bitset <8> data("11111111");
    cout << "HEX Data = " << std::hex << data.to_ulong() << std::endl;
    
    /*
    const unsigned command[] = {0x50};
    write(serial_port, command, 1);

    const unsigned command1[] = {0x51};
    write(serial_port, command1, 1);
    
    const unsigned char command2[] = {0xFF};
    write(serial_port, command2, 1);
    
    const unsigned char command3[] = {0x3};
    write(serial_port, command3, 1);
     
    const unsigned char command4[] = {0xFF};
    write(serial_port, command4, 2);
    
    Board board1 = BoardFactory::GetBoard(PROLIFIC);
    board1.SetLogger(1);
    Board board2 = BoardFactory::GetBoard(PROLIFIC);
    board2.SetLogger(2);
    */
    
    return 0;
}
