//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_TRANSPORT_H
#define COS214_PROJECT_TRANSPORT_H

#include "TransportState.h"
#include "WorkingTransportState.h"
#include "BrokenTransportState.h"

/** @author Amicke
 *  @date 2022/10/31
 *
 *  Transport.h represents the state of transport which can be broken or working
 */
class Transport {
private:
    /**
     * @param state of transport object
     */
    TransportState* state;

public:
    /**
     * @brief deletion of the state object
     */
    virtual ~Transport();
    /**
     * @brief handles the request made of the state of transport to be broken or working
     */
    float request();
    /**
     * @brief creates a new WorkingTransportState object
     */
    void setStateWorking();
    /**
     * @brief creates a new BrokenTransportState object
     */
    void setStateBroken();
};


#endif //COS214_PROJECT_TRANSPORT_H
