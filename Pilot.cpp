//
// Created by ethan on 2022/10/17.
//
#include "Pilot.h"

Pilot::Pilot() {
    state = new PeopleAliveState();
    dmg = 3;
}

Pilot::~Pilot(){
    delete state;
}

int Pilot::act() {
    return (dmg * state->handle(dmg));
}