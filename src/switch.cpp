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
    cout << "Created switch Id:" << id << endl;
}

const int& Switch::GetId(){
    return id;
}

const SWITCH_STATUS& Switch::GetStatus(){
    return status;
};

void Switch::SetStatus(const SWITCH_STATUS& Status){
    status = Status;
};

Switch::~Switch(){
    cout << "Deleted switch Id:" << id << endl;
}

