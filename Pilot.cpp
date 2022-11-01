//
// Created by ethan on 2022/10/17.
//
#include "Pilot.h"

/** Pilots start alive with default damage multiplier of 3
 *
 */
Pilot::Pilot() {
    state = new PeopleAliveState();
    dmg = 3;
}

Pilot::~Pilot(){
    delete state;
}

/** Pilot deals damage - default multiplier times amount determined by alive, injured or dead
 *
 * @return damage dealt
 */
int Pilot::act() {
    return (dmg * state->handle(dmg));
}