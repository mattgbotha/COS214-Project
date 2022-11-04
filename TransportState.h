//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_TRANSPORTSTATE_H
#define COS214_PROJECT_TRANSPORTSTATE_H

/** @author Amicke
 *  @date 2022/10/01
 *
 *  Abstract class to be used as base class for Transport.h's handle function
 */

class TransportState {
public:
    /**
     * @brief pure virtual function for state of transport to be handled as either working or broken
     * @return int of either 0.25 or 1
     */
    virtual float handle() =0;
    virtual ~TransportState() = default;
};


#endif //COS214_PROJECT_TRANSPORTSTATE_H
