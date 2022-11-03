//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_BROKENTRANSPORTSTATE_H
#define COS214_PROJECT_BROKENTRANSPORTSTATE_H

#include "TransportState.h"

/** @author Amicke
 *  @date 2022/11/01
 *
 *  A specialization of the TransportState class - transport is in the broken state
 */

class BrokenTransportState : public TransportState{

public:
    /**
     * @brief handles state of transport to be broken when called
     * @return int of 0.25
     */
    float handle();

};


#endif //COS214_PROJECT_BROKENTRANSPORTSTATE_H
