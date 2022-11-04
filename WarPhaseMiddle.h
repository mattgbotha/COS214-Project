//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_MIDDLE_H
#define CODE_WAR_PHASE_MIDDLE_H
#include "WarPhase.h"
#include "WarPhaseLate.h"
#include <cstring>
class WarEngine;

/** @author Ethan
 *  @date 31 October 2022
 *
 *  Represents the middle phase of the war - the action and battle
 */
class WarPhaseMiddle : public WarPhase {
public:
    void warAlgorithm(WarEngine& x) override;
    static void tryRepair(Country& c);
};
#endif //CODE_WAR_PHASE_MIDDLE_H
