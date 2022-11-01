//
// Created by ethan on 2022/10/17.
//
#include "PeopleInjuredState.h"

PeopleInjuredState::PeopleInjuredState() {}

/** The damage a People object can do while being injured
 *
 * @param dmg The People object's damage
 * @return 1
 */
int PeopleInjuredState::handle(int dmg) {
    return 1;
}