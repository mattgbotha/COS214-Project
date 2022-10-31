// Created by Matt on 2022/10/17.

#ifndef CONCRETECOUNTRYFACTORY_H
#define CONCRETECOUNTRYFACTORY_H

#include "CountryFactory.h"

class ConcreteCountryFactory : public CountryFactory {
public:
    ConcreteCountryFactory();
    ~ConcreteCountryFactory();
    Country* produceCountry(string name) override;
};

#endif