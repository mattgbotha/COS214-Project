//
// Created by ethan on 2022/10/31.
//
#include "WarPhase.h"

WarPhase::~WarPhase() = default;

void WarPhase::warAlgorithm(WarEngine &x) {}

int WarPhase::randomNum() {
    std::default_random_engine gen;
    gen.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(0,99);
    return distribution(gen);
}
