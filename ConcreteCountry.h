// Created by Matt on 2022/10/17.

#ifndef CONCRETECOUNTRY_H
#define CONCRETECOUNTRY_H

#include "Country.h"

class ConcreteCountry : public Country {
public:
	ConcreteCountry();
	ConcreteCountry(string name, int numPeople);
	virtual ~ConcreteCountry();
	virtual void attack() override;	// Call act() method on each person in people[]
	virtual void defend() override;	// Call act() method on each person in people[]
};

#endif