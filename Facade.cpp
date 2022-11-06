//
// Created by ethan on 2022/11/03.
//

#include "Facade.h"

/// The WarEngine's loop() function is called thrice @see WarEngine
void Facade::gameStart() {

    for (int i = 0; i < 3; i++){
        WarEngine::instance().loop();
    }
}

Facade::~Facade() {}

Facade::Facade() {}
