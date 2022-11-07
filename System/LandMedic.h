//
// Created by ethan on 2022/10/17.
//

#ifndef LAND_MEDIC_H
#define LAND_MEDIC_H
#include "Medic.h"

/** @author Ethan
 * @date 17 October 2022
 *
 * Medics stationed on the ground
 */
class LandMedic : public Medic{
public:
    LandMedic();
    ~LandMedic();
    int act();
};


#endif //LAND_MEDIC_H
