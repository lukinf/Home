//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"

Relay::Relay(const int& Id, Prolific* Board): Switch(Id){
    board = Board;
}

void Relay::SetStatus(const switch_status& Status){
    string bits;
    for(int i = 0; i < board->GetNumberOfSwitches(); i++){
        if(Status == ON && id == i){
            bits = board->GetBits();
            bits.replace(i, 1, "0");
            board->SetBits(bits);
            break;
        } else if (status == OFF && id == i){
            bits = board->GetBits();
            bits.replace(i, 1, "1");
            board->SetBits(bits);
            break;
        }
    }
    status = Status;
};

Relay::~Relay(){
}
