//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_BROKENTRANSPORTSTATE_H
#define COS214_PROJECT_BROKENTRANSPORTSTATE_H

#include "TransportState.h"

/** @author Franko Swanepoel
 *  @date 2022/10/24
 *
 *  A specialization of the TransportState class - used to indicate the broken state of the Transport class
 */

class BrokenTransportState : public TransportState{

public:
    /**
     * @brief returns a value that can be used to determine the amount of damage that a country is able to do
     * @return int of 0.25
     */
    float handle();

};


#endif //COS214_PROJECT_BROKENTRANSPORTSTATE_H
