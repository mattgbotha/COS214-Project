//
// Created by ethan on 2022/10/17.
//
#include "AirMedic.h"

AirMedic::AirMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

AirMedic::~AirMedic(){
    delete state;
}

int AirMedic::act() {
    return (dmg * state->handle(dmg));
}