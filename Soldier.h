//
// Created by ethan on 2022/10/17.
//

#ifndef SOLDIER_H
#define SOLDIER_H
#include "People.h"

class Soldier : public People{
public:
    virtual ~Soldier();
    virtual int act();
};

#endif //SOLDIER_H
