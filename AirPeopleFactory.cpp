//
// Created by ethan on 2022/10/17.
//
#include "AirPeopleFactory.h"

AirPeopleFactory::AirPeopleFactory() {}
AirPeopleFactory::~AirPeopleFactory() {}

People *AirPeopleFactory::createSoldier() {
    return new Pilot();
}

People *AirPeopleFactory::createMedic() {
    return new AirMedic();
}

People *AirPeopleFactory::createCitizen() {
    return new LandCitizen();
}