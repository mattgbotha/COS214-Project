//
// Created by ethan on 2022/10/17.
//

#ifndef SEA_MEDIC_H
#define SEA_MEDIC_H
#include "Medic.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  Specilisation of Medic - those stationed at sea
 */
class SeaMedic : public Medic{
public:
    SeaMedic();
    ~SeaMedic();
    int act();
};

#endif //SEA_MEDIC_H
