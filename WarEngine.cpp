//
// Created by ethan on 2022/10/31.
//

#include "WarEngine.h"
#include "WarPhase.h"
#include "WarPhaseEarly.h"
#include "WarPhaseMiddle.h"

WarEngine::WarEngine() {
    phase = new WarPhaseEarly();
    factory = new ConcreteCountryFactory();
}

WarEngine::~WarEngine() {
//    delete phase;
//    delete factory;
}

void WarEngine::loop() {
    phase->warAlgorithm(*this);
}
