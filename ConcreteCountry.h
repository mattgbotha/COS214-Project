//
// Created by mattg on 2022/10/31.
//

#ifndef CONCRETECOUNTRY_H
#define CONCRETECOUNTRY_H

#include "Country.h"

class ConcreteCountry : public Country {
public:
    ConcreteCountry();
    ConcreteCountry(string name);
    ConcreteCountry(string name, int numPeople);
    virtual ~ConcreteCountry();

    void attack() override;
    void defend() override;
};

#endif