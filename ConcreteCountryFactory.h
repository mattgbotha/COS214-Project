// Created by Matt on 2022/10/17.

#ifndef CONCRETECOUNTRYFACTORY_H
#define CONCRETECOUNTRYFACTORY_H

#include "CountryFactory.h"

class ConcreteCountryFactory : public CountryFactory {
public:
	/// @brief Constructor
	ConcreteCountryFactory();
	~ConcreteCountryFactory();
	/// @brief Creates and returns a new Country class object
	/// @param name Country Name as string
	/// @return new concreteCountry object*
	Country* produceCountry(string name) override;
};

#endif
