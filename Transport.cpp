//
// Created by Franko Swanepoel on 2022/10/24.
//

#include "Transport.h"

float Transport::request() {
    return state->handle();
}

Transport::~Transport() {
    delete state;
}

void Transport::setStateWorking() {
    state = new WorkingTransportState();
}

void Transport::setStateBroken() {
    state = new BrokenTransportState();
}


