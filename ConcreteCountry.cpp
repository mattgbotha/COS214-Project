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
    int totalAttack = 0;

    for (int i = 0; i < getNumPeople(); i++){
        totalAttack = totalAttack + citizens[i]->act();
    }

    totalAttack = totalAttack * transport->request();

    return totalAttack;
}

void ConcreteCountry::defend(int damage) {

}