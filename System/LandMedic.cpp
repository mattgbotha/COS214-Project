//
// Created by ethan on 2022/10/17.
//
#include "LandMedic.h"

/** Medics start alive with a default damage multiplier of 1
 *
 */
LandMedic::LandMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

LandMedic::~LandMedic(){
    delete state;
}

/** Medic deals damage (if needed) - multiplier times
 *      damage determined by alive, dead or injured.
 * @return damage dealt
 */
int LandMedic::act() {
    return (dmg * state->handle());
}