//
// Created by ethan on 2022/10/17.
//
#include "WaterPeopleFactory.h"

WaterPeopleFactory::WaterPeopleFactory() {}
WaterPeopleFactory::~WaterPeopleFactory() {}

People *WaterPeopleFactory::createCitizen() {
    return new LandCitizen();
}

People *WaterPeopleFactory::createMedic() {
    return new SeaMedic();
}

People *WaterPeopleFactory::createSoldier() {
    return new Navy();
}