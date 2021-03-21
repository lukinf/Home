//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"
#include "enums.hpp"

Relay::Relay(const int& Id, Prolific* Board): Switch(Id){
    board = Board;
}

void Relay::SetStatus(const SWITCH_STATUS& Status){
    string bits;
    for(int i = 0; i < board->GetNumberOfSwitches(); i++){
        if(Status == ON && id == i){
            bits = board->GetBits();
            //char on = ;
            bits.replace(i, 1, to_string(ON));
            board->SetBits(bits);
            break;
        } else if (status == OFF && id == i){
            bits = board->GetBits();
            bits.replace(i, 1, to_string(OFF));
            board->SetBits(bits);
            break;
        }
    }
    status = Status;
};

Relay::~Relay(){
}
