// Created by Matt on 2022/10/17.

#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <iostream>
#include "People.h"
#include "Mediator.h"

using namespace std;

class Country {
private:
    string name;
    int numPeople;

protected:
    Country* allies;
    Country* enemies;
    People* people;

public:
    Country();
    Country(string name);
    Country(string name, int numPeople);
    virtual ~Country();
    string getName();
    void setName(string name);
    int getNumPeople();
    void setNumPeople(int numPeople);
    virtual void attack() = 0;
    virtual void defend() = 0;

    /* Implement
    void changed();
    void get();
    void set();
     */
};

#endif