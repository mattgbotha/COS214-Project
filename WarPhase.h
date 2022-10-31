//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_H
#define CODE_WAR_PHASE_H
#include "WarEngine.h"

class WarPhase{
public:
    virtual ~WarPhase();
    virtual void warAlgorithm(WarEngine& x);
};

#endif //CODE_WAR_PHASE_H
