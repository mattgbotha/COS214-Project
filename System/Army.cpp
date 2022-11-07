//
// Created by ethan on 2022/10/17.
//
#include "Army.h"

/** Soldiers start alive with a default damage of 3
 *
 */
Army::Army() {
    state = new PeopleAliveState();
    dmg = 3;
}

Army::~Army(){
    delete state;
}

/** Soldier does damage - amount of which is determined by base damage times their capable
 *      damage based off of their state whether alive, injured or dead.
 * @return damage dealt
 */
int Army::act() {
    return (dmg * state->handle());
}