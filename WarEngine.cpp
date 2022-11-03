//
// Created by ethan on 2022/10/31.
//

#include "WarEngine.h"
#include "WarPhase.h"
#include "WarPhaseEarly.h"
#include "WarPhaseMiddle.h"
#include "WarPhaseLate.h"

WarEngine::WarEngine() {
    phase = new WarPhaseEarly();
    factory = new ConcreteCountryFactory();
}

WarEngine::~WarEngine() {
    delete phase;
    delete factory;
}

void WarEngine::loop() {
    phase->warAlgorithm(*this);
}

bool WarEngine::alliesAlive() {
    bool alive = false;
    for (auto & ally : allies){
        alive = alive || ally->isAlive();
    }
    return alive;
}

bool WarEngine::enemiesAlive() {
    bool alive = false;
    for (auto & enemy : enemies){
        alive = alive || enemy->isAlive();
    }
    return alive;
}
