//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_LATE_H
#define CODE_WAR_PHASE_LATE_H
#include "WarPhase.h"

/** @author Ethan
 *  @date 31 October 2022
 *
 *  Represents the late phase of the war - after all battles
 */
class WarPhaseLate : public WarPhase {
public:
    void warAlgorithm(WarEngine& x) override;
};


#endif //CODE_WAR_PHASE_LATE_H
