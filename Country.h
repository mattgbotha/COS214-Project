// Created by Matt on 2022/10/17.

#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include "People.h"
// #include "Observer.h"

using namespace std;

class Country {
private:
	string name;					// Name of the country
	int ID;							// Country ID
	int numPeople;					// Number of people in the country

	Country* allies;				// Array of allied countries
	Country* enemies;				// Array of enemy countries
	People* people;					// Array of people in the country
	// Observer* observerList;

public:
	Country();
	Country(string name, int numPeople);
	virtual ~Country();

	string getName();
	int getNumPeople();
	int getID();

	void setName(string name);
	void setNumPeople(int numPeople);

	virtual void attack() = 0;
	virtual void defend() = 0;

	// void notify();
	// void attach(Observer obs);
	// void detach(Observer obs);
};

#endif