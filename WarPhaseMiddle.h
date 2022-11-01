//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_MIDDLE_H
#define CODE_WAR_PHASE_MIDDLE_H
#include "WarPhase.h"
#include "WarPhaseLate.h"
#include <cstring>
class WarEngine;

class WarPhaseMiddle : public WarPhase {
public:
    void warAlgorithm(WarEngine& x) override;
};
#endif //CODE_WAR_PHASE_MIDDLE_H
