//
// Created by ethan on 2022/10/17.
//

#ifndef CITIZEN_H
#define CITIZEN_H
#include "People.h"

/** @author Ethan
 * @date 17 October 2022
 * A specialisation of the People class - Citizen represents a citizen of a country
 */
class Citizen : public People{
public:
    virtual ~Citizen();
    virtual int act();
};

#endif //CITIZEN_H
