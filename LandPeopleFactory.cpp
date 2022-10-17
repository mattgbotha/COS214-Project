//
// Created by ethan on 2022/10/17.
//
#include "LandPeopleFactory.h"

LandPeopleFactory::LandPeopleFactory() {}
LandPeopleFactory::~LandPeopleFactory() {}

People *LandPeopleFactory::createCitizen() {
    return new LandCitizen();
}

People *LandPeopleFactory::createMedic() {
    return new LandMedic();
}

People *LandPeopleFactory::createSoldier() {
    return new Army();
}