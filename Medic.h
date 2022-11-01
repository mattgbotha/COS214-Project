//
// Created by ethan on 2022/10/17.
//

#ifndef MEDIC_H
#define MEDIC_H
#include "People.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * A specialisation of the People class - Medic represents the role of a medic in the war scene
 */
class Medic : public People{
public:
    virtual ~Medic();
    virtual int act();
};

#endif //MEDIC_H
