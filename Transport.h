//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_TRANSPORT_H
#define COS214_PROJECT_TRANSPORT_H

#include "TransportState.h"
#include "WorkingTransportState.h"
#include "BrokenTransportState.h"

class Transport {
private:
    TransportState* state;

public:
    virtual ~Transport();
    float request();
    void setStateWorking();
    void setStateBroken();
};


#endif //COS214_PROJECT_TRANSPORT_H
