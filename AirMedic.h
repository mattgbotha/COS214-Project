//
// Created by ethan on 2022/10/17.
//

#ifndef AIR_MEDIC_H
#define AIR_MEDIC_H
#include "Medic.h"

class AirMedic : public Medic{
public:
    AirMedic();
    ~AirMedic();
    int act();
};

#endif //AIR_MEDIC_H