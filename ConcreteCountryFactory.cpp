//
// Created by mattg on 2022/10/31.
//

#include "ConcreteCountryFactory.h"

ConcreteCountryFactory::ConcreteCountryFactory() {}

ConcreteCountryFactory::~ConcreteCountryFactory() {
    cout << "Country Factory deleted." << endl;
}

Country* ConcreteCountryFactory::produceCountry(string name) {
    return new ConcreteCountry(name);
}