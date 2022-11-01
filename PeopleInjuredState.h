//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_INJURED_STATE_H
#define PEOPLE_INJURED_STATE_H
#include "PeopleStatus.h"

/** @author Ethan
 * @date 17 October 2022
 * @see People
 *
 * Represents the state of being injured of a People object
 */
class PeopleInjuredState : public PeopleStatus{
public:
    PeopleInjuredState();
    int handle();
};

#endif //PEOPLE_INJURED_STATE_H
