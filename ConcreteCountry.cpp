//
// Created by mattg on 2022/10/31.
// Edited by ethan on 2022/11/01
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
    int damageTaken = damage/5;
    int peopleKilled = damageTaken * 0.25;
    int peopleInjured = damageTaken - peopleKilled - 1;
    int pkTracker = 0, piTracker = 0;

    for (int i = 0; i < getNumPeople(); i++){
        if (citizens[i]->state->handle() == 2){ //currently alive
            if (piTracker < peopleInjured){
                citizens[i]->changeStateInjured();
                piTracker++;
            }
        }
    }

    for (int i = 0; i < getNumPeople(); i++){
        if (citizens[i]->state->handle() == 1){//currently injured
            if (pkTracker < peopleKilled){
                citizens[i]->changeStateDead();
                pkTracker++;
            }
        }
    }
}