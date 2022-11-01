//
// Created by ethan on 2022/10/17.
//

#ifndef PILOT_H
#define PILOT_H
#include "Soldier.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * Soldiers stationed for aerial battle
 */
class Pilot : public Soldier{
public:
    Pilot();
    ~Pilot();
    int act();
};

#endif //PILOT_H
