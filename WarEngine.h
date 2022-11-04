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

/** @author Ethan
 *  @date 31 October 2022
 *
 *  The WarEngine is the mastermind of the whole game. It is parameterised with a phase which then causes
 *      the engine to act accordingly in executing the game. The WarEngine has access to phases and countries.
 */
class WarEngine {
private:
    WarPhase* phase; ///< The current war phase - early, mid or late
    std::vector<Country*> countries; ///< A vector of all participating countries
    std::vector<Country*> allies; ///< A vector of the player's country's allies
    std::vector<Country*> enemies; ///< A vector of the player's country's enemies
    Country* player; ///
    CountryFactory* factory;

public:
    WarEngine();
    ~WarEngine();
    void loop();

    friend class WarPhaseEarly;
    friend class WarPhaseMiddle;
};

#endif //CODE_WAR_ENGINE_H
