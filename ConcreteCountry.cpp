//
// Created by mattg on 2022/10/31.
//

#include "ConcreteCountry.h"

ConcreteCountry::ConcreteCountry() : Country() {}

ConcreteCountry::ConcreteCountry(string name) : Country(name) {}

ConcreteCountry::~ConcreteCountry() {
    cout << this->getName() << " deleted." << endl;
}

int ConcreteCountry::attack() {
    return -1;
}

void ConcreteCountry::defend(int damage) {

}