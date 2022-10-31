//
// Created by mattg on 2022/10/31.
//

#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "Country.h"
#include "ConcreteCountry.h"
#include "Mediator.h"


class ConcreteMediator : public Mediator {
public:
    ConcreteMediator();
    ~ConcreteMediator();
    virtual void notify(ConcreteCountry* country);
private:
    Country* countryList;
};


#endif //CONCRETEMEDIATOR_H
