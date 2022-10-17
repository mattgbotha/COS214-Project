//
// Created by ethan on 2022/10/17.
//
#include "SeaMedic.h"

SeaMedic::SeaMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

SeaMedic::~SeaMedic(){
    delete state;
}

int SeaMedic::act() {
    return (dmg * state->handle(dmg));
}