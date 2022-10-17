//
// Created by ethan on 2022/10/17.
//
#include "LandMedic.h"

LandMedic::LandMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

LandMedic::~LandMedic(){
    delete state;
}

int LandMedic::act() {
    return (dmg * state->handle(dmg));
}