//
// Created by ethan on 2022/10/31.
//

#include "WarEngine.h"
#include "WarPhase.h"
#include "WarPhaseEarly.h"
#include "WarPhaseMiddle.h"
#include "WarPhaseLate.h"

/** War starts in the early phase
 *
 */
WarEngine::WarEngine() {
    phase = new WarPhaseEarly();
    factory = new ConcreteCountryFactory();
}

WarEngine::~WarEngine() {
    delete phase;
    delete factory;
}

///The algorithm which acts as the execution of the war is called. Actions will depend on which phase the war is in
void WarEngine::loop() {
    phase->warAlgorithm(*this);
}

/** Checks whether each allied country's people are alive
 *
 * @return alive - a true or false indicating whether all ally countries are alive
 */
bool WarEngine::alliesAlive() {
    bool alive = false;
    for (auto & ally : allies){
        alive = alive || ally->isAlive();
    }
    return alive;
}

/** Checks whether each enemy country's people are alive
 *
 * @return alive - true or false indicating whether all enemy countries are alive
 */
bool WarEngine::enemiesAlive() {
    bool alive = false;
    for (auto & enemy : enemies){
        alive = alive || enemy->isAlive();
    }
    return alive;
}
