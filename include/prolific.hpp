//
//  prolific.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "board.hpp"

#ifndef prolific_h
#define prolific_h

class Prolific : public Board
{
public:
    Prolific();
    void GetRelays();
    ~Prolific();
    typedef Board super;
};

#endif /* prolific_h */
