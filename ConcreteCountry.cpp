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
                if (numAlive > 0){
                    numAlive--;
                }
            }
        }
    }
    cout << getName() << " took " << damageTaken << " damage and lost " << peopleKilled << " people" << endl;
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

Country *ConcreteCountry::clone() {
    auto* countryClone = new ConcreteCountry(this->getName());
    countryClone->citizens.clear();
    for (auto & p : this->citizens){
        switch(p->dmg){
            case 1:
                countryClone->citizens.push_back(new LandMedic());
                break;
            case 2:
                countryClone->citizens.push_back(new LandCitizen());
                break;
            case 3:
                countryClone->citizens.push_back(new Army());
                break;
            default:
                break;
        }
        switch(p->state->handle()){
            case 0:
                countryClone->citizens[countryClone->citizens.size()-1]->changeStateDead();
                break;
            case 1:
                countryClone->citizens[countryClone->citizens.size()-1]->changeStateInjured();
                break;
            case 2:
                countryClone->citizens[countryClone->citizens.size()-1]->changeStateAlive();
                break;
            default:
                break;
        }
    }
    if (this->requestTransport() == 1){
        countryClone->fixTransport();
    }else{
        countryClone->breakTransport();
    }
    return countryClone;
}
