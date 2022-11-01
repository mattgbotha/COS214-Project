//
// Created by ethan on 2022/10/17.
//

#ifndef ARMY_H
#define ARMY_H
#include "Soldier.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * The Soldiers represented to be stationed on land
 */
class Army : public Soldier{
public:
    Army();
    ~Army();
    int act();
};

#endif //ARMY_H
