//
// Created by ethan on 2022/10/17.
//

#ifndef SOLDIER_H
#define SOLDIER_H
#include "People.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * A specialisation of the People class - soldier represents soldier of a country in a war scene
 */
class Soldier : public People{
public:
    virtual ~Soldier();
    virtual int act();
};

#endif //SOLDIER_H
