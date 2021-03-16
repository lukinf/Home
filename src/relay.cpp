//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"

Relay::Relay(){
}

switch_status Relay::GetStatus(){
    return Super::Status;
};

void Relay::SetStatus(switch_status status){
    Super::SetStatus(status);
};

Relay::~Relay(){
    SetStatus(OFF);
}
