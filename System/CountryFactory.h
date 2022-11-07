// Created by Matt on 2022/10/17.

#ifndef COUNTRYFACTORY_H
#define COUNTRYFACTORY_H

#include "Country.h"
#include "ConcreteCountry.h"

class CountryFactory {
public:
    
    CountryFactory();
    virtual ~CountryFactory();
    /// @brief Pure virtual function for Producing country
    /// @param name Country Name
    /// @return new concreteCountry Object
    virtual Country* produceCountry(string name) = 0;
};

#endif