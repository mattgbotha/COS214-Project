//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseEarly.h"
#include <iostream>
#include <string>

using namespace std;

//sets up the game by initializing all the member variables accordingly
void WarPhaseEarly::warAlgorithm(WarEngine& x) {
    string name, size;
    vector<string> countryNames{"France", "US", "China", "Spain", "Italy", "Germany", "UK", "Russia", "Moon", "Antarctica"};
    int numCountries;

    cout << "Welcome player" << endl;
    cout << "What would you like your country to be called? - ";
    cin >> name;
    x.player = x.factory->produceCountry(name);
    cout << "Perfect!" << endl;
    cout << endl;
    cout << "How big do you want the war to be?" << endl;
    cout << "SMALL/MEDIUM/LARGE - ";
    cin >> size;

    if (size == "SMALL" || size == "small" || size == "Small"){
        numCountries = 3;
    }
    else if (size == "MEDIUM" || size == "medium" || size == "Medium"){
        numCountries = 5;
    }
    else if (size == "LARGE" || size == "large" || size == "Large"){
        numCountries = 7;
    }
    else{
        cout << "not accepted";
        numCountries = -1;
    }

    cout << endl;
    cout << "Good choice!" << endl;

    for (int i = 0; i < numCountries; i++){
        int k = randomNum() % countryNames.size();
        x.countries.push_back(x.factory->produceCountry(countryNames[k]));
        countryNames.erase(countryNames.begin()+k);
    }

    x.allies.push_back(x.player);

    for (int i = 0; i < numCountries; i++){
        if (i%2 == 0){
            x.enemies.push_back(x.countries.at(i));
        }else{
            x.allies.push_back(x.countries.at(i));
        }
    }


    cout << "Welcome to the war, " << name << endl;
    cout << "Keep your wits about you and remember.." << endl;
    cout << "War, war never changes." << endl;
    x.phase = new WarPhaseMiddle();
}
