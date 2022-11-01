//
// Created by Franko Swanepoel on 2022/10/24.
//

#ifndef COS214_PROJECT_TRANSPORTSTATE_H
#define COS214_PROJECT_TRANSPORTSTATE_H


class TransportState {
public:
    virtual float handle() =0;
    virtual ~TransportState() = default;
};


#endif //COS214_PROJECT_TRANSPORTSTATE_H
