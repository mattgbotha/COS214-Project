// Created by Matt on 2022/10/17.

#ifndef COUNTRYFACTORY_H
#define COUNTRYFACTORY_H

#include "Country.h"
#include "ConcreteCountry.h"

class CountryFactory {
public:
    CountryFactory();
    virtual ~CountryFactory();
    virtual Country* produceCountry(string name) = 0;
};

#endif