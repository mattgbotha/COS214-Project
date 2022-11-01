//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_DEAD_STATE_H
#define PEOPLE_DEAD_STATE_H
#include "PeopleStatus.h"

/** @author Ethan
 * @date 17 October 2022
 * @see People
 *
 * Represents the state of being date of a People object
 */
class PeopleDeadState : public PeopleStatus{
public:
    PeopleDeadState();
    int handle(int dmg);
};

#endif //PEOPLE_DEAD_STATE_H
