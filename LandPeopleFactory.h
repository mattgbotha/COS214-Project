//
// Created by ethan on 2022/10/17.
//

#ifndef LAND_PEOPLE_FACTORY_H
#define LAND_PEOPLE_FACTORY_H
#include "PeopleFactory.h"
#include "LandCitizen.h"
#include "Army.h"
#include "LandMedic.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  A specialisation of the PeopleFactory class - it creates Army,
 *      LandCitizen and LandMedic objects.
 *
 *      @see LandCitizen
 *      @see Army
 *      @see LandMedic
 */
class LandPeopleFactory : public PeopleFactory{
public:
    LandPeopleFactory();
    ~LandPeopleFactory();

    People* createSoldier();
    People* createMedic();
    People* createCitizen();
};

#endif //LAND_PEOPLE_FACTORY_H
