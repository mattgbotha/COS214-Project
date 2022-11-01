//
// Created by ethan on 2022/10/17.
//
#include "LandCitizen.h"

/** LandCitizens start alive with a default damage multiplier of 2
 *
 */
LandCitizen::LandCitizen() {
    state = new PeopleAliveState();
    dmg = 2;
}

LandCitizen::~LandCitizen(){
    delete state;
}

/** LandCitizen deals damage (if and when needed)
 *      - multiplier times their state (alive/injured/dead)
 * @return damage dealt
 */
int LandCitizen::act() {
    return (dmg * state->handle());
}