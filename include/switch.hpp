//
//  relay.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef switch_h
#define switch_h

#include <iostream>
#include "switch.hpp"
#include "enums.hpp"

using namespace std;

class Switch
{
public:
    Switch(const int& Id);
    const int& GetId();
    const SWITCH_STATUS& GetStatus();
    virtual void SetStatus(const SWITCH_STATUS& Status);
    ~Switch();
protected:
    int id;
    SWITCH_STATUS status;
};

#endif /* relay_h */
