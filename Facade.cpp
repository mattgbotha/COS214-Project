//
// Created by ethan on 2022/11/03.
//

#include "Facade.h"

void Facade::gameStart() {
    for (int i = 0; i < 3; i++){
        engine->loop();
    }
}

Facade::~Facade() {
    delete engine;
}

Facade::Facade() {
    engine = new WarEngine();
}