//
// Created by mattg on 2022/10/31.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H

class Mediator {
public:
    Mediator();
    virtual ~Mediator();
    virtual void notify() = 0;
};

#endif //MEDIATOR_H
