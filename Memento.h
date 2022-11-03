//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_MEMENTO_H
#define COS214_PROJECT_MEMENTO_H

#include "WarEngine.h"
#include "stateMem.h"
#include "Country.h"


class Memento {
private:

    TransportState* ts;
    vector<People*> peparray;
     friend class WarEngine;

    Memento();
    stateMem* state;
public:

    virtual ~Memento();



};


#endif //COS214_PROJECT_MEMENTO_H
