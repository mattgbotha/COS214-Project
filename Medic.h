//
// Created by ethan on 2022/10/17.
//

#ifndef MEDIC_H
#define MEDIC_H
#include "People.h"

class Medic : public People{
public:
    virtual ~Medic();
    virtual int act();
};

#endif //MEDIC_H
