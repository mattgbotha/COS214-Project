//
// Created by ethan on 2022/10/17.
//
#include "SeaMedic.h"

///SeaMedics start alive with default multiplier of 1
SeaMedic::SeaMedic() {
    state = new PeopleAliveState();
    dmg = 1;
}

SeaMedic::~SeaMedic(){
    delete state;
}

/** SeaMedic deals damage - multiplier times amount determined by
 *      alive, dead or injured
 * @return damage dealt
 */
int SeaMedic::act() {
    return (dmg * state->handle());
}