//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"
#include "enums.hpp"

Relay::Relay(const int& Id): Switch(Id){
}

void Relay::SetStatus(const SWITCH_STATUS& Status){
    status = Status;
};

Relay::~Relay(){
}
