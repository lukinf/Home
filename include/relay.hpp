//
//  relay.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef relay_hpp
#define relay_hpp

#include "switch.hpp"
#include "prolific.hpp"
#include <string>

class Relay : public Switch
{
public:
    Relay(const int& Id);
    void SetStatus(const SWITCH_STATUS& Status);
    ~Relay();
};

#endif /* relay_hpp */

