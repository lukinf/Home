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

int Switch::GetId(){
    return id;
}

switch_status Switch::GetStatus(){
    return status;
};

void Switch::SetStatus(const switch_status& Status){
    status = Status;
};

Switch::~Switch(){
    cout << "Deleted switch Id:" << id << endl;
}

