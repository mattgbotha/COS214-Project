//
// Created by ethan on 2022/10/17.
//

#ifndef LAND_CITIZEN_H
#define LAND_CITIZEN_H
#include "Citizen.h"

class LandCitizen : public Citizen{
    LandCitizen();
    ~LandCitizen();
    int act();
};

#endif //LAND_CITIZEN_H
