//
// Created by ethan on 2022/10/17.
//

#ifndef SEA_MEDIC_H
#define SEA_MEDIC_H
#include "Medic.h"

class SeaMedic : public Medic{
public:
    SeaMedic();
    ~SeaMedic();
    int act();
};

#endif //SEA_MEDIC_H
