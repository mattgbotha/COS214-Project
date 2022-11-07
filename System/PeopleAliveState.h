//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_ALIVE_STATE_H
#define PEOPLE_ALIVE_STATE_H
#include "PeopleStatus.h"

/** @author Ethan
 * @date 17 October 2022
 * @see People
 *
 * Represents the state of a People object as being alive
 */
class PeopleAliveState : public PeopleStatus{
public:
    PeopleAliveState();
    int handle();
};

#endif //PEOPLE_ALIVE_STATE_H
