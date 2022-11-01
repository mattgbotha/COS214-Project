//
// Created by ethan on 2022/10/17.
//
#include "PeopleAliveState.h"

PeopleAliveState::PeopleAliveState() {}

/** The damage a People object can do in the Alive state
 *
 * @return Damage the People object is capable of whilst "alive", in this case, 2
 */
int PeopleAliveState::handle() {
    return 2;
}