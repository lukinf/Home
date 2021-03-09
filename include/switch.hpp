//
//  relay.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "top.hpp"

#ifndef switch_h
#define switch_h

class Switch
{
public:
    Switch();
    virtual switch_status GetStatus();
    virtual void SetStatus(switch_status status);
    ~Switch();
private:
    switch_status Status;
};

#endif /* relay_h */
