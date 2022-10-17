//
// Created by ethan on 2022/10/17.
//

#ifndef PILOT_H
#define PILOT_H
#include "Soldier.h"

class Pilot : public Soldier{
public:
    Pilot();
    ~Pilot();
    int act();
};

#endif //PILOT_H
