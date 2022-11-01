//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_DEAD_STATE_H
#define PEOPLE_DEAD_STATE_H
#include "PeopleStatus.h"

class PeopleDeadState : public PeopleStatus{
public:
    PeopleDeadState();
    int handle();
};

#endif //PEOPLE_DEAD_STATE_H
