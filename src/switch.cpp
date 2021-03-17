//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include "switch.hpp"

Switch::Switch(){
    SetStatus(OFF);
}

int Switch::GetId(){
    return Id;
}

void Switch::SetId(int id){
    Id = id;
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

