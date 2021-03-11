//
//  prolific.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef prolific_h
#define prolific_h

#include "board.hpp"
#include "top.hpp"

class Prolific : public Board
{
public:
    Prolific();
    void GetRelays();
    void OpenAndCofigureSerialPort();
    ~Prolific();
    typedef const Board Super;
private:
    const int NUMBER_OF_RELAYS = 8;
};

#endif /* prolific_h */
