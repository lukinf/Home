//
//  relay.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef relay_hpp
#define relay_hpp

#include "switch.hpp"
#include "board.hpp"
#include <string>

class Relay : public Switch
{
public:
    Relay(Board * board);
    switch_status GetStatus();
    void SetStatus(switch_status status);
    ~Relay();
    typedef Switch Super;
private:
    Board * board;
};

#endif /* relay_hpp */
