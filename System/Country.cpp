#include "Country.h"
using namespace std;

Country::Country() {
    randomPeople();
}

Country::Country(string name) {
    this->name = name;
    randomPeople();
    transport = new Transport;
    transport->setStateWorking();
}
Country::~Country(){
    delete transport;
}

void Country::randomPeople() {
    // Factories to initialize people
    auto* airFactory = new AirPeopleFactory();
    auto* landFactory = new LandPeopleFactory();
    auto* waterFactory = new WaterPeopleFactory();

    // Random number of people between 20 and 30
    int n = randomNumInRange(20, 30);
    this->numPeople = n;
    this->numAlive = n;
    // Populate vector with a random type of person
    for (int i = 0; i < n; i++) {
        int tempRand = randomNumInRange(1, 9);
        switch(tempRand) {
            case 1: citizens.push_back(airFactory->createCitizen()); break;
            case 2: citizens.push_back(airFactory->createMedic()); break;
            case 3: citizens.push_back(airFactory->createSoldier()); break;
            case 4: citizens.push_back(landFactory->createCitizen()); break;
            case 5: citizens.push_back(landFactory->createMedic()); break;
            case 6: citizens.push_back(landFactory->createSoldier()); break;
            case 7: citizens.push_back(waterFactory->createCitizen()); break;
            case 8: citizens.push_back(waterFactory->createMedic()); break;
            case 9: citizens.push_back(waterFactory->createSoldier()); break;
            default: cout << "Citizen not created." << endl;
        }
    }
    delete airFactory;
    delete landFactory;
    delete waterFactory;
}

int Country::randomNumInRange(int min, int max) {
    int number = min+(rand()%(max-min+1));
    return number;
}

string Country::getName() {
    return name;
}

int Country::getNumPeople() const {
    return numPeople;
}

int Country::getNumAlive() const {
    return numAlive;
}

void Country::fixTransport() {
    transport->setStateWorking();
}

void Country::breakTransport() {
    transport->setStateBroken();
}

float Country::requestTransport() {
    return transport->request();
}

bool Country::isAlive() const {
    if (numAlive>0){
        return true;
    }
    return false;
}

int Country::getNumInjured() const {
    int injured = 0;
    for (auto citizen : citizens){
        if (citizen->state->handle() == 1){
            injured++;
        }
    }
    return injured;
}
