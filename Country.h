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
#include "Transport.h"
#include "PeopleIterator.h"

using namespace std;

class Country {
private:
    string name;
    int numPeople;

protected:
    int numAlive;
    Transport* transport;
    vector<People*> citizens;
public:
    Country();
    /// @brief Instantiates Country Object
	/// @param name Name of the country
    Country(string name);
    virtual ~Country();
    /// @brief Pure virtual attack() function
    /// @return Damage number that the country will deal
    virtual int attack() = 0;
    /// @brief Pure virtual defend() function
    /// @param damage Damage number that the country will take
    virtual void defend(int damage) = 0;
    /// @brief Pure virtual heal() function
    virtual void heal() = 0;
    /// @brief Populates the people vector with between 20 - 30 people of random Jobs
    void randomPeople();
    /// @brief Generates a random number in the range
    /// @param min Minimum int of range
    /// @param max Maximum int of range
    /// @return int between min and max
    static int randomNumInRange(int min, int max);
    /// @brief Getter for country name
    /// @return string Country name
    string getName();
    /// @brief getter for numPeople(Population)
    /// @return int numPeople
    int getNumPeople() const;
    /// @brief is able to get the total number of people that are alive within a country
    /// @return int of the number of people alive in the country
    int getNumAlive() const;
    /// @brief is able to get the total number of people that are injured within a country
    /// @return int of the number of people injured in the country
    int getNumInjured() const;
    /// @brief method allowing the Country's transport state to be changed to the fixed state
    /// @see BrokenTransportState
    void fixTransport();
    /// @brief method allowing the Country's transport state to be changed to the broken state
    /// @see WorkingTransportState
    void breakTransport();
    /// @brief allows the country to request the transport
    /// @return float of the value that the transport state returns
    float requestTransport();
    /// @brief checks whether the country has any people left alive in it's array
    /// @return returns true if the country is still alive
    bool isAlive() const;
    /// @brief is able to return a clone of the country
    /// @return Country* to the clone
    virtual Country* clone() = 0;

};

#endif
