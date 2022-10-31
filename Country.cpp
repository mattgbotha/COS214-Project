#include "Country.h"
using namespace std;


	Country::Country(string name, int numPeople)
    {
        this->name = name;
        this->numPeople = numPeople;
        return;
    };
	
	string Country::getName()
    {
        return this->name;
    };
	int Country::getNumPeople()
    {
        return this->numPeople;
    };
	
	void Country::setName(string name)
    {
        this->name = name;
    };
	void Country::setNumPeople(int numPeople)
    {
        this->numPeople = numPeople;
    };