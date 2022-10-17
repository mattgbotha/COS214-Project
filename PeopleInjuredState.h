//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_INJURED_STATE_H
#define PEOPLE_INJURED_STATE_H
#include "PeopleStatus.h"

class PeopleInjuredState : public PeopleStatus{
public:
    PeopleInjuredState();
    int handle(int dmg);
};

#endif //PEOPLE_INJURED_STATE_H
