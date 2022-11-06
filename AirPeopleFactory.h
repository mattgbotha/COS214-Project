//
// Created by ethan on 2022/10/17.
//

#ifndef AIR_PEOPLE_FACTORY_H
#define AIR_PEOPLE_FACTORY_H
#include "PeopleFactory.h"
#include "Pilot.h"
#include "AirMedic.h"
#include "LandCitizen.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  A specialisation of the  PeopleFactory class, the AirPeopleFactory creates Pilot and
 *      AirMedic classes/objects
 *
 *      @see AirMedic
 *      @see Pilot
 */
class AirPeopleFactory : public PeopleFactory{
public:
    AirPeopleFactory();
    ~AirPeopleFactory();

    People* createSoldier();
    People* createMedic();
    People* createCitizen();
};

#endif //AIR_PEOPLE_FACTORY_H
