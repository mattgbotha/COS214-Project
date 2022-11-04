//
// Created by Franko Swanepoel on 2022/11/03.
//

#include "Memento.h"

/**
 * @brief the stateMem object is being initialise by the TransportState object and the vector array
 */
Memento::Memento() {
    state = new stateMem(ts,peparray);
}

/**
 * @brief stateMem object will be deleted and state will be set to 0
 */
Memento::~Memento() {
    delete state;
    state = 0;
}
