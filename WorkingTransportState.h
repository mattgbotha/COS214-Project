//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_CONCRETETRANSPORTSTATE_H
#define COS214_PROJECT_CONCRETETRANSPORTSTATE_H

#include "TransportState.h"

/** @author Amicke
 *  @date 2022/11/01
 *
 *  A specialization of the TransportState class - transport is in the working state
 */

class WorkingTransportState : public TransportState{

public:
    /**
    * @brief handles state of transport to be working when called
    * @return int of 1
    */
    float handle();
};


#endif //COS214_PROJECT_CONCRETETRANSPORTSTATE_H
