//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseEarly.h"
#include <iostream>
#include <string>

using namespace std;

/** Sets up the game by initialising all the member variables accordingly.
 *  In summary, this is done by asking for the war size and player country
 *      and then setting up the ally and enemy vectors (and countries), finally
 *      updating the phase of the WarEngine to the middle phase to progress the war game.
 *
 *
 * @param x The WarEngine object of the current game
 */
void WarPhaseEarly::warAlgorithm(WarEngine& x) {
    string name, size;
    vector<string> countryNames{"France", "US", "China", "Spain", "Italy", "Germany", "UK", "Russia", "Moon", "Antarctica"}; ///< Vector from which participating countries can be chosen depending on war size
    int numCountries;

    cout << R"(               ,,ggddY"""Ybbgg,,)"<<             endl;
    cout << R"(          ,agd888b,_ "Y8, ___`""Ybga,)"<<        endl;
    cout << R"(       ,gdP""88888888baa,.""8b    "888g,)"<<     endl;
    cout << "     ,dP\"     ]888888888P'  \"Y     `888Yb,"<<    endl;
    cout << R"(   ,dP"      ,88888888P"  db,       "8P""Yb,)"<< "       __          __  _                            _" << endl;
    cout << "  ,8\"       ,888888888b, d8888a           \"8,"<< "      \\ \\        / / | |                          | |" << endl;
    cout << " ,8'        d88888888888,88P\"' a,          `8,"<< R"(      \ \  /\  / /__| | ___ ___  _ __ ___   ___  | |_ ___)" << endl;
    cout << R"(,8'         88888888888888PP"  ""           `8,)"<< R"(      \ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  )" << endl;
    cout << "d'          I88888888888P\"                   `b"<< R"(       \  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) |)" << endl;
    cout << R"(8           `8"88P""Y8P'                      8)" << R"(     ___\/__\/ \___|_|\___\___/|_| |_| |_|\___|  \__\___( ))" << endl;
    cout << "8            Y 8[  _ \"                        8"<< "    |__   __|  | |      | | \\ \\        / /              |/"<<endl;
    cout << "8              \"Y8d8b  \"Y a                   8"<< R"(       | | ___ | |_ __ _| |  \ \  /\  / /_ _ _ __)"<<endl;
    cout << "8                 `\"\"8d,   __                 8"<< R"(       | |/ _ \| __/ _` | |   \ \/  \/ / _` | '__|         )"<<endl;
    cout << "Y,                    `\"8bd888b,             ,P"<<R"(       | | (_) | || (_| | |    \  /\  / (_| | |)"<< endl;
    cout << "`8,                     ,d8888888baaa       ,8'"<< R"(       |_|\___/ \__\__,_|_|     \/  \/ \__,_|_|)"<< endl;
    cout << " `8,                    888888888888'      ,8'"<<endl;
    cout << "  `8a                   \"8888888888I      a8'"<<  endl;
    cout << "   `Yba                  `Y8888888P'    adP'"<<    endl;
    cout << "     \"Yba                 `888888P'   adY\""<<    endl;
    cout << R"(       `"Yba,             d8888P" ,adP"')" <<    endl;
    cout << "          `\"Y8baa,      ,d888P,ad8P\"'"<<         endl;
    cout << R"(               ``""YYba8888P""'')"<<             endl;
    cout << endl << endl;

    cout << "What would you like your country to be called? -";
    cin >> name;
    x.player = x.factory->produceCountry(name);
    cout << "Perfect!" << endl;
    cout << endl;
    cout << "How big do you want the war to be?" << endl;
    cout << "SMALL/MEDIUM/LARGE -";
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
    cout << "Good choice!" << endl << endl;

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

    cout << string(10, '\n');
    cout << "Welcome to the war, " << name << endl;
    cout << "Keep your wits about you and remember.." << endl;
    cout << "War, war never changes." << endl << flush;
    cout << endl;
    x.phase = new WarPhaseMiddle();
}
