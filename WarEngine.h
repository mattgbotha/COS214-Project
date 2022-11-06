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
    Country* player; ///< The country in the player's control
    CountryFactory* factory;

protected:
    WarEngine();
    ~WarEngine();
    WarEngine(const WarEngine&);

public:
    /// @brief Loop method is used to run a phase of the WarEngine
    void loop();
    /// @brief Checks whether any allies are alive
    /// @return Boolean - True if any allies are still alive
    bool alliesAlive();
    /// @brief Checks whether any enemies are alive
    /// @return Boolean - True if any enemies are still alive
    bool enemiesAlive();
    /// @brief Method to return the Singleton instance of the WarEngine
    static WarEngine& instance();

    friend class WarPhaseEarly;
    friend class WarPhaseMiddle;
    friend class WarPhaseLate;
};

#endif //CODE_WAR_ENGINE_H
