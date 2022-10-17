//
// Created by ethan on 2022/10/17.
//

#ifndef AIR_PEOPLE_FACTORY_H
#define AIR_PEOPLE_FACTORY_H
#include "PeopleFactory.h"

class AirPeopleFactory : public PeopleFactory{
public:
    AirPeopleFactory();
    ~AirPeopleFactory();

    People* createSoldier();
    People* createMedic();
    People* createCitizen();
};

#endif //AIR_PEOPLE_FACTORY_H
