//
//  relay.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef switch_h
#define switch_h

#include "switch.hpp"
#include "top.hpp"

class Switch
{
public:
    Switch();
    int GetId();
    void SetId(int status);
    virtual switch_status GetStatus();
    virtual void SetStatus(switch_status status);
    ~Switch();
protected:
    int id;
    switch_status Status;
};

#endif /* relay_h */
