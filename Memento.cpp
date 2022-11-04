//
// Created by Franko Swanepoel on 2022/11/03.
//

#include "Memento.h"

Memento::Memento() {
    state = new stateMem(ts,peparray);
}

Memento::~Memento() {
    delete state;
    state = 0;
}
