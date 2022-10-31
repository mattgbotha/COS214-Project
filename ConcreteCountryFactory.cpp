//
// Created by mattg on 2022/10/31.
//

#include "ConcreteCountryFactory.h"

ConcreteCountryFactory::ConcreteCountryFactory() {}

ConcreteCountryFactory::~ConcreteCountryFactory() {
    cout << "Country Factory deleted." << endl;
}

Country* CountryFactory::produceCountry(string name) {
    Country* newCountry = new ConcreteCountry(name);
    return newCountry;
}