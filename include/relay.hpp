//
//  relay.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef relay_hpp
#define relay_hpp

#include "switch.hpp"
#include "top.hpp"

class Relay : public Switch
{
public:
    Relay();
    switch_status GetStatus();
    void SetStatus(switch_status status);
    ~Relay();
    typedef Switch super;
};

#endif /* relay_hpp */
