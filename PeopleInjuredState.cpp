//
// Created by ethan on 2022/10/17.
//
#include "PeopleInjuredState.h"

PeopleInjuredState::PeopleInjuredState() {}

/** The damage a People object can do while being injured
 *
 * @return 1
 */
int PeopleInjuredState::handle() {
    return 1;
}