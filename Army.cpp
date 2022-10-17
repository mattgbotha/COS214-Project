//
// Created by ethan on 2022/10/17.
//
#include "Army.h"

Army::Army() {
    state = new PeopleAliveState();
    dmg = 3;
}

Army::~Army(){
    delete state;
}

int Army::act() {
    return (dmg * state->handle(dmg));
}