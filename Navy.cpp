//
// Created by ethan on 2022/10/17.
//
#include "Navy.h"

/** Soldiers in the navy start alive with default damage multiplier of 3
 *
 */
 Navy::Navy() {
    state = new PeopleAliveState();
    dmg = 3;
}

Navy::~Navy(){
    delete state;
}

/** Navy soldier deals damage - default times amount determined by alive, injured or dead
 *
 * @return damage dealt
 */
int Navy::act() {
    return (dmg * state->handle(dmg));
}