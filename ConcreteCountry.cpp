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

    auto* i = new PeopleIterator(citizens);
    People* p;

    int k = 0;
    while (&i->at(k) != i->end){
        p = &i->at(k);
        totalAttack = totalAttack + p->act();
        k++;
    }
    p = i->end;
    totalAttack = totalAttack + p->act();

    totalAttack = totalAttack * transport->request();
    delete p;
    delete i;
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

//    auto* it = new PeopleIterator(citizens);
//    People* p;
//    int k = 0;
//    while (&it->at(k) != it->end){
//        p = &it->at(k);
//        cout << p->act() << endl;
//        k++;
//    }
//    p = it->end;
//    cout << p->act() << endl;

    for (int i = 0; i < getNumPeople(); i++){
        if (citizens[i]->state->handle() == 1){//currently injured
            if (pkTracker < peopleKilled){
                citizens[i]->changeStateDead();
                pkTracker++;
                if (numAlive > 0){
                    numAlive--;
                }
            }
        }
    }
}

void ConcreteCountry::heal() {
    int numMedics = 0;
    int mTracker;

    for (int i = 0; i < getNumPeople(); i++){
        if (citizens[i]->dmg == 1){
            numMedics++;
        }
    }
    mTracker = numMedics;
    for (int i = 0; i < getNumPeople(); i++){
        if (citizens[i]->state->handle() == 1){
            if (mTracker > 0){
                citizens[i]->changeStateAlive();
            }
        }
    }
}
