//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_EARLY_H
#define CODE_WAR_PHASE_EARLY_H
#include "WarPhase.h"
#include "WarPhaseMiddle.h"

class WarEngine;

/** @author Ethan
 *  @date 31 October 2022
 *
 *  Represents the early state of the war - the setup before any actual battle
 */
class WarPhaseEarly : public WarPhase {
public:
    void warAlgorithm(WarEngine& x) override;
};


#endif //CODE_WAR_PHASE_EARLY_H
