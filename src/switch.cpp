//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "switch.hpp"
#include "top.hpp"

Switch::Switch(){
    SetStatus(ON);
}

switch_status Switch::GetStatus(){
    return Status;
};

void Switch::SetStatus(switch_status status){
    Status = status;
};

Switch::~Switch(){
    SetStatus(OFF);
}

