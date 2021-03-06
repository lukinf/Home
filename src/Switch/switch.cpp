//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "switch.hpp"

Switch::Switch(const int& Id){
    id = Id;
    status = OFF;
}

int& Switch::GetId(){
    return id;
}

SWITCH_STATUS& Switch::GetStatus(){
    return status;
};

void Switch::SetStatus(const SWITCH_STATUS& Status){
    status = Status;
};

Switch::~Switch(){
}

