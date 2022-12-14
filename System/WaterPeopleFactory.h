//
// Created by ethan on 2022/10/17.
//

#ifndef WATER_PEOPLE_FACTORY_H
#define WATER_PEOPLE_FACTORY_H
#include "PeopleFactory.h"
#include "Navy.h"
#include "SeaMedic.h"
#include "LandCitizen.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  A specialisation of the PeopleFactory class, the WaterPeopleFactory class
 *      creates Navy and SeaMedic objects
 *
 *      @see SeaMedic
 *      @see Navy
 */
class WaterPeopleFactory : public PeopleFactory{
public:
    WaterPeopleFactory();
    ~WaterPeopleFactory();

    People* createSoldier();
    People* createMedic();
    People* createCitizen();
};

#endif //WATER_PEOPLE_FACTORY_H
