//
// Created by ethan on 2022/10/17.
//
#include "People.h"

People::People(){}
People::~People(){}

/** Changes the person's state to alive
 * @see PeopleAliveState
 */
void People::changeStateAlive() {
    state = new PeopleAliveState();
}

/** Changes the person's state to dead
 * @see PeopleDeadState
 */
void People::changeStateDead() {
    state = new PeopleDeadState();
}

/** Changes the person's state to injured
 * @see PeopleInjuredState
 */
void People::changeStateInjured() {
    state = new PeopleInjuredState();
}