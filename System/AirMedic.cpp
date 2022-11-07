//
// Created by ethan on 2022/10/17.
//
#include "AirMedic.h"

///Air Medics start alive with default damage multiplier of 1
AirMedic::AirMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

AirMedic::~AirMedic(){
    delete state;
}

/** AirMedic deals damage - multiplier times amount determined by
 *      alive, injured or dead
 * @return damage dealt
 */
int AirMedic::act() {
    return (dmg * state->handle());
}