//
// Created by ethan on 2022/10/17.
//
#include "LandCitizen.h"

LandCitizen::LandCitizen() {
    state = new PeopleAliveState();
    dmg = 2;
}

LandCitizen::~LandCitizen(){
    delete state;
}

int LandCitizen::act() {
    return (dmg * state->handle(dmg));
}