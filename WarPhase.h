//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_PHASE_H
#define CODE_WAR_PHASE_H
#include "WarEngine.h"
#include <random>
#include <iostream>
#include <chrono>

/** @author Ethan
 *  @date 31 October 2022
 *
 *  The interface/abstract class for the phase the war is in (early/middle/late)
 *
 *  @see WarPhaseEarly
 *  @see WarPhaseMiddle
 *  @see WarPhaseLate
 */
class WarPhase{
public:
    virtual ~WarPhase();
    virtual void warAlgorithm(WarEngine& x) = 0;
    /// @brief Returns a random number between 0 - 99
    /// @return Int
    static int randomNum();
};

#endif //CODE_WAR_PHASE_H
