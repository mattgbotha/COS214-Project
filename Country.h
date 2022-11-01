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
    /// @brief Instantiates Country Object
	/// @param name Name of the country
    Country(string name);
    virtual ~Country();
    /// @brief Pure Virtual attack() function
    virtual void attack() = 0;
    /// @brief Pure virtual Defend() function
    virtual void defend() = 0;
    /// @brief Populates the people vector with between 20 - 30 people of random Jobs
    void randomPeople();
    /// @brief Generates a random number in the range
    /// @param min Minimum int of range
    /// @param max Maximum int of range
    /// @return int between min and max
    int randomNumInRange(int min, int max);
    /// @brief Getter for country name
    /// @return string Country name
    string getName();
    /// @brief getter for numPeople(Poulation)
    /// @return int numPeople
    int getNumPeople();
    /* Implement
    void changed();
    void get();
    void set();
     */
};

#endif
