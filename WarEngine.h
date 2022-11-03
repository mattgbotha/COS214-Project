//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_ENGINE_H
#define CODE_WAR_ENGINE_H
#include "ConcreteCountry.h"
//#include "WarPhase.h"
//#include "WarPhaseEarly.h"
#include <vector>
#include "CountryFactory.h"
#include "ConcreteCountryFactory.h"

class WarPhase;
class WarPhaseEarly;
class WarPhaseMiddle;
class WarPhaseLate;

class WarEngine {
private:
    WarPhase* phase;
    std::vector<Country*> countries;
    std::vector<Country*> allies;
    std::vector<Country*> enemies;
    Country* player;
    CountryFactory* factory;

public:
    WarEngine();
    ~WarEngine();
    void loop();
    bool alliesAlive();
    bool enemiesAlive();

    friend class WarPhaseEarly;
    friend class WarPhaseMiddle;
    friend class WarPhaseLate;
};

#endif //CODE_WAR_ENGINE_H
