#include "Country.h"
using namespace std;

Country::Country() {}

Country::~Country() {}

Country::Country(string name) {
    this->name = name;
}

Country::Country(string name, int numPeople) {
    this->name = name;
    this->numPeople = numPeople;
}

string Country::getName() {
    return name;
}

int Country::getNumPeople() {
    return numPeople;
}

void Country::setName(string name) {
    this->name = name;
}

void Country::setNumPeople(int numPeople) {
    this->numPeople = numPeople;
}