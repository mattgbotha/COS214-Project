//
// Created by ethan on 2022/10/31.
//

#ifndef CODE_WAR_ENGINE_H
#define CODE_WAR_ENGINE_H
#include "ConcreteCountry.h"
#include "WarPhase.h"
#include "WarPhaseEarly.h"
#include <vector>
#include "CountryFactory.h"
#include "ConcreteCountryFactory.h"

class WarEngine {
private:
    WarPhase* phase;
    std::vector<Country*> countries;
    Country* player;
    CountryFactory* factory;

public:
    WarEngine();
    ~WarEngine();
    void loop();

    friend class WarPhaseEarly;
};

#endif //CODE_WAR_ENGINE_H
