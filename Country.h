// Created by Matt on 2022/10/17.

#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include "People.h"
// #include "Observer.h"

using namespace std;

class Country {
private:
	string name;
	int ID;
	int numPeople;

	Country* allies;				// Array of allied countries
	Country* enemies;				// Array of enemy countries
	People* people;					// Array of people in the country
	// Observer* observerList;

public:
	Country();
	/// @brief Instantiates Country Object
	/// @param name Name of the country
	/// @param numPeople Population of the country
	Country(string name, int numPeople);
	virtual ~Country();
	/// @brief Getter for name
	/// @return returns name variable as a string
	string getName();
	/// @brief Getter for numPeople
	/// @return returns numPeople as int
	int getNumPeople();
	/// @brief Setter for name Variable
	/// @param name Country name
	void setName(string name);
	/// @brief Setter for numPeople,Country Population
	/// @param numPeople Population to set
	void setNumPeople(int numPeople);
	/// @brief Pure Virtual attack() function
	virtual void attack() = 0;
	/// @brief Pure virtual Defend() function
 	virtual void defend() = 0;

	// void notify();
	// void attach(Observer obs);
	// void detach(Observer obs);
};

#endif
