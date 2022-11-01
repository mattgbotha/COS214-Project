//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_ALIVE_STATE_H
#define PEOPLE_ALIVE_STATE_H
#include "PeopleStatus.h"

class PeopleAliveState : public PeopleStatus{
public:
    PeopleAliveState();
    int handle();
};

#endif //PEOPLE_ALIVE_STATE_H
