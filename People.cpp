//
// Created by ethan on 2022/10/17.
//
#include "People.h"

void People::changeStateAlive() {
    state = new PeopleAliveState();
}

void People::changeStateDead() {
    state = new PeopleDeadState();
}

void People::changeStateInjured() {
    state = new PeopleInjuredState();
}