//
// Created by ethan on 2022/10/17.
//
#include "Navy.h"

Navy::Navy() {
    state = new PeopleAliveState();
    dmg = 3;
}

Navy::~Navy(){
    delete state;
}

int Navy::act() {
    return (dmg * state->handle(dmg));
}