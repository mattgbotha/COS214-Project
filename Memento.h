//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_MEMENTO_H
#define COS214_PROJECT_MEMENTO_H

#include "WarEngine.h"
#include "stateMem.h"
#include "Country.h"

/**
 * @author Amicke
 * @date 2022/11/03
 */

class Memento {
private:
    /**
     * @param ts - TransportState object
     */
    TransportState* ts;
    /**
     * @param peparray - vector of People objects
     */
    vector<People*> peparray;
     friend class WarEngine;
    /**
     * @brief Memento constructor to initialise a new stateMem object
     */
    Memento();
    /**
     * @param state - stateMem object
     */
    stateMem* state;
public:
    virtual ~Memento();



};


#endif //COS214_PROJECT_MEMENTO_H
