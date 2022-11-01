//
// Created by ethan on 2022/10/17.
//
#include "PeopleDeadState.h"

PeopleDeadState::PeopleDeadState() {}

/** The damage a People object can do while dead
 *
 * @return 0 since logically no damage can be dealt while dead (for humans)
 */
int PeopleDeadState::handle() {
    return 0;
}