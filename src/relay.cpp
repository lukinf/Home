//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"
#include "top.hpp"

Relay::Relay(){
    SetStatus(ON);
}

switch_status Relay::GetStatus(){
    return super::Status;
};

void Relay::SetStatus(switch_status status){
    super::SetStatus(status);
};

Relay::~Relay(){
    SetStatus(OFF);
}
