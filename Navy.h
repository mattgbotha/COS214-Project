//
// Created by ethan on 2022/10/17.
//

#ifndef NAVY_H
#define NAVY_H
#include "Soldier.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * Soldiers stationed at sea
 */
class Navy : public Soldier{
public:
    Navy();
    ~Navy();
    int act();
};

#endif //NAVY_H
