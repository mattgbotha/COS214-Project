//
// Created by ethan on 2022/10/17.
//

#ifndef AIR_MEDIC_H
#define AIR_MEDIC_H
#include "Medic.h"

/** @author Ethan
 *  @date 17 October 2022
 *
 *  Specialisation of Medic - those stationed in the air
 */
class AirMedic : public Medic{
public:
    AirMedic();
    ~AirMedic() override;
    int act();
};

#endif //AIR_MEDIC_H
