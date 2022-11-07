//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_FACTORY_H
#define PEOPLE_FACTORY_H

#include "People.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  The abstract class for creations of People classes
 */
class PeopleFactory{
public:
    PeopleFactory();
    virtual ~PeopleFactory();

    virtual People* createSoldier() = 0;
    virtual People* createMedic() = 0;
    virtual People* createCitizen() = 0;
};

#endif //PEOPLE_FACTORY_H
