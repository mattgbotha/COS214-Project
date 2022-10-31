//
// Created by mattg on 2022/10/31.
//

#include "ConcreteCountry.h"

ConcreteCountry::ConcreteCountry() : Country() {}

ConcreteCountry::ConcreteCountry(string name) : Country(name) {}

ConcreteCountry::ConcreteCountry(string name, int numPeople) : Country(name, numPeople) {}

ConcreteCountry::~ConcreteCountry() {
    cout << this->getName() << " deleted." << endl;
}

void ConcreteCountry::attack() {
    for(int i = 0; i < getNumPeople(); i++) {
        people[i].act();
    }
}

void ConcreteCountry::defend() {
    for (int i = 0; i < getNumPeople(); i++) {
        people[i].act();
    }
}