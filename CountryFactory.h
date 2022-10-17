// Created by Matt on 2022/10/17.

#ifndef COUNTRYFACTORY_H
#define COUNTRYFACTORY_H

#include "Country.h"

class CountryFactory {
public:
	CountryFactory();
	virtual ~CountryFactory();
	virtual Country* produceCountry(std::string name) = 0;

	// Will these be useful?...
	// virtual Country* produceAlly(std::string name) = 0;
	// virtual Country* produceEnemy(std::string name) = 0;
};

#endif