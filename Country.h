// Created by Matt on 2022/10/17.

#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <iostream>
#include <vector>
#include <random>

#include "People.h"
#include "Mediator.h"
#include "AirPeopleFactory.h"
#include "LandPeopleFactory.h"
#include "WaterPeopleFactory.h"

using namespace std;

class Country {
private:
    string name;
    int numPeople;

protected:
    Country* allies;
    Country* enemies;
    vector<People> citizens;

public:
    Country();
    Country(string name);
    virtual ~Country();
    virtual void attack() = 0;
    virtual void defend() = 0;
    void randomPeople();
    int randomNumInRange(int min, int max);
    string getName();
    int getNumPeople();
    /* Implement
    void changed();
    void get();
    void set();
     */
};

#endif
