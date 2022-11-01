//
// Created by mattg on 2022/10/31.
//

#ifndef CONCRETECOUNTRY_H
#define CONCRETECOUNTRY_H

#include "Country.h"

class ConcreteCountry : public Country {
public:
	/// @brief base Constructor for concreteCountry
	ConcreteCountry();
	/// @brief Paramaterized Constructor for ConcreteCountry
	/// @param name Country Name as string
	/// @param numPeople Country Population as int
	ConcreteCountry(string name, int numPeople);
	virtual ~ConcreteCountry();
	/// @brief attack() method calls the act() method on all people in this countrys people[]
	int attack() override;	// Call act() method on each person in people[]
	/// @brief defend() method calls the act() method on all people in this countrys people[]
	void defend(int dmg) override;	// Call act() method on each person in people[]
};

#endif