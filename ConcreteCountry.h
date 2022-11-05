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
	ConcreteCountry(string name);
	virtual ~ConcreteCountry();
	/// @brief attack() method sums the act() method of all people in this country's people[]
	int attack() override;
	/// @brief defend() method uses the passed in integer to determine how much damage the country should take
	/// @param dmg the damage that the country will take
	void defend(int dmg) override;
    /// @brief heal() method allows the country to heal people based on the number of medics that are alive in the country
    void heal() override;
};

#endif