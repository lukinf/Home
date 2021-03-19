//
//  relay.cpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#include "relay.hpp"

Relay::Relay(const int& Id): Switch(Id){
}

//void Relay::SetStatus(switch_status status){
   /*
    string bits;
    for(int i = 0; i < board->GetNumberOfSwitches(); i++){
        if(status == ON && Id == i){
            bits = board->GetBits();
            bits.replace(i, 1, "0");
            board->SetBits(bits);
            break;
        } else if (status == OFF && Id == i){
            bits = board->GetBits();
            bits.replace(i, 1, "1");
            board->SetBits(bits);
            break;
        }
    }
    Super::SetStatus(status);
    */
//};

Relay::~Relay(){
    
}
