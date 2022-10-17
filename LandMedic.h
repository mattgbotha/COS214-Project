//
// Created by ethan on 2022/10/17.
//

#ifndef LAND_MEDIC_H
#define LAND_MEDIC_H
#include "Medic.h"

class LandMedic : public Medic{
public:
    LandMedic();
    ~LandMedic();
    int act();
};


#endif //LAND_MEDIC_H
