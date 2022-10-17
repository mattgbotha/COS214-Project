//
// Created by ethan on 2022/10/17.
//

#ifndef CITIZEN_H
#define CITIZEN_H
#include "People.h"

class Citizen : public People{
public:
    virtual int act();
};

#endif //CITIZEN_H
