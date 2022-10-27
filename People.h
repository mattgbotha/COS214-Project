//
// Created by Ethan on 2022/10/17.
//

#ifndef PEOPLE_H
#define PEOPLE_H
#include "PeopleStatus.h"
#include "PeopleAliveState.h"
#include "PeopleDeadState.h"
#include "PeopleInjuredState.h"

class People{
public:
    int dmg;
    PeopleStatus* state;

    People();
    virtual ~People();

    virtual int act() = 0;
    void changeStateDead();
    void changeStateInjured();
    void changeStateAlive();
};

#endif //PEOPLE_H
