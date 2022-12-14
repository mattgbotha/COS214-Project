//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseMiddle.h"

/** The actual battle during the war in the game.
 *      In summary, the player's enemies and allies are given. Next, the player is repeatedly
 *      given a choice in the move they wish to make - attack, repair, heal or undo.
 *
 *  Attack - the player chooses a country to attack out of the enemy countries. If a random chance succeeds,
 *      the player also breaks the country's transport lines.
 *
 *  Repair - attempt to repair the player's own transport lines
 *
 *  Heal - heal player's own troops
 *
 *  Undo - undo previous move
 *
 *  The AI or computer then also makes its move based on random chance, similar to the player's choices
 *
 *  As soon as anyone is defeated (people dead), the WarEngine is pushed to the late phase.
 * @param x the current game's WarEngine object
 */
void WarPhaseMiddle::warAlgorithm(WarEngine& x) {
    string playerDecision;
    int aiDecision;
    int aiAttackDecision;

    cout << "Your opponents are..." << endl;
    cout << " ";
    for (auto & enemy : x.enemies){
        int tmp = enemy->getName().size();
        cout << "__";
        for (int i = 0; i < tmp; i++){
            cout << "_";
        }
        cout << "__ ";
    }
    cout << endl << "|  "<< x.enemies[0]->getName() << "  |";
    for (int i = 1; i < x.enemies.size(); i++){
        cout << "  " <<x.enemies[i]->getName() << "  |";
    }
    cout << endl;
    cout << endl;

    cout << "Your allies are..." << endl;
    cout << " ";
    for (auto & ally : x.allies){
        int tmp = ally->getName().size();
        cout << "__";
        for (int i = 0; i < tmp; i++){
            cout << "_";
        }
        cout << "__ ";
    }
    cout << endl << "|  " << x.allies[0]->getName() << "  |";
    for (int i = 1; i < x.allies.size(); i++){
        cout << "  " << x.allies[i]->getName() << "  |";
    }
    cout << endl;
    cout << endl;

    choice:
    if (!x.player->isAlive()){
        goto aiChoice;
    }
    cout << "What would you like to do?" << endl;
    cout << "ATTACK/REPAIR/HEAL/UNDO -";
    cin >> playerDecision;

    if (playerDecision == "ATTACK" || playerDecision == "Attack" || playerDecision == "attack"){//attack
        string attackDecision;
        int breakTransport = randomNum()%10;

        cout << "You have chosen to attack this turn" << endl;
        cout << "Who would you like to launch an attack against?" << endl;
        for (auto & enemy : x.enemies){
            if (enemy->getNumAlive() > 0){
                cout << enemy->getName() << "/";
            }
        }
        cout << " - ";
        cin >> attackDecision;
        cout << endl;

        for (auto & enemy : x.enemies) {
            if (enemy->getName() == attackDecision){
                enemy->defend(x.player->attack());
                if (breakTransport <= 2){
                    enemy->breakTransport();
                    cout << "You managed to break " << enemy->getName() << "'s transport lines" << endl;
                }
            }
        }

    }
    else if (playerDecision == "REPAIR" || playerDecision == "Repair" || playerDecision == "repair"){//repair
        cout << "You have chosen to repair your transport lines this turn" << endl;
        tryRepair(*x.player);
    }
    else if (playerDecision == "HEAL" || playerDecision == "Heal" || playerDecision == "heal"){//heal
        cout << "You have chosen to heal your injured troops this turn" << endl;
        x.player->heal();
        cout << "You healed some of your injured troops!" << endl;
        cout << "They will now be able to do more damage in battle!" << endl;
    }
    else if (playerDecision == "UNDO" || playerDecision == "Undo" || playerDecision == "undo"){//undo
        cout << "You have chosen to undo your last move" << endl;
    }
    else{
        cout << "Invalid choice" << endl;
        goto choice;
    }

    //AI decisions
    //Allies
    aiChoice:
    for (int i = 1; i < x.allies.size(); i++){  //I start's at 1 because it doesn't include the player
        aiDecision = randomNum()%10;
        if (!x.alliesAlive() || !x.enemiesAlive()){
            goto enterLatePhase;
        }
        if (!x.allies[i]->isAlive()){
            continue;
        }
        cout << x.allies[i]->getName();
        if (x.allies[i]->requestTransport() != 1){ //transport broken then try fix it
            cout << " has decided to try repair their transport lines" << endl;
            tryRepair(*x.allies[i]);
        }else{
            if (aiDecision < 6){//attack
                aiAttackDecision = randomNum()%x.enemies.size();
                while (!x.enemies[aiAttackDecision]->isAlive()){
                    aiAttackDecision = (aiAttackDecision+1)%x.enemies.size();
                }
                cout << " has decided to attack " << x.enemies[aiAttackDecision]->getName() << endl;
                x.enemies[aiAttackDecision]->defend(x.allies[i]->attack());
            }else{
                cout << " has decided to heal their troops" << endl;
                x.allies[i]->heal();
            }
        }
    }

    cout << endl;
    printStats(x.enemies, x.allies);

    //Enemies
    for (auto & enemy : x.enemies){
        aiDecision = randomNum()%10;
        if (!x.alliesAlive() || !x.enemiesAlive()){
            goto enterLatePhase;
        }
        if (!enemy->isAlive()){
            continue;
        }

        cout << enemy->getName();
        if (enemy->requestTransport() != 1){ //transport broken so try to fix it
            cout << " has decided to attempt to repair their transport lines" << endl;
            tryRepair(*enemy);
        }else{
            if (aiDecision < 7){
                cout << " has decided to launch a counter attack!" << endl;
                aiAttackDecision = randomNum()%x.allies.size();
                while (!x.allies[aiAttackDecision]->isAlive()){
                    aiAttackDecision = (aiAttackDecision+1)%x.allies.size();
                }
                x.allies[aiAttackDecision]->defend(enemy->attack());
            }else{
                cout << " has decided to allow their troops to heal" << endl;
                enemy->heal();
            }
        }
    }
    goto choice;

    enterLatePhase:
    x.phase = new WarPhaseLate();
}

/** Attempt to repair a country's transport lines - by a random 40% chance
  *      there will be a successful repair
  *
  *      @param c The country which transport lines are attempted to be repaired
  */
void WarPhaseMiddle::tryRepair(Country& c) {
    int transportChance = randomNum()%10;
    if (transportChance <= 6){
        cout << "Succeeded in repairing the transport lines" << endl;
        c.fixTransport();
    }else{
        cout << "Unfortunately the transport lines remain broken" << endl;
        c.breakTransport();
    }
}

void WarPhaseMiddle::printStats(const vector<Country *>& v, const vector<Country*>& v2) {
    int tmp;
    for (int i = 15; i >= 0; i--){
        if (2*i < 10){
            cout << " " << 2*i;
        }else{
            cout << 2*i;
        }
        cout << "| ";
        for (auto & country : v){
            if (country->getNumInjured() > (2*i)){
                cout << "O";
            }else if (country->getNumInjured() == (2*i)-1){
                cout << "o";
            }else{
                cout << " ";
            }
            cout << " ";
            if (country->getNumAlive() > (2*i)){
                cout << "M";
            }else if (country->getNumAlive() == (2*i)-1){
                cout << "m";
            }else{
                cout << " ";
            }
            tmp = country->getName().size() - 3 +3;
            for (int k = 0; k < tmp; k++){
                cout << " ";
            }
        }
        cout << "     ";
        switch(i) {
            case 10:
                cout << "          _______ ";
                break;
            case 9:
                cout << "|\\     /|(  ____ \\";
                break;
            case 8:
                cout << "| )   ( || (    \\/";
                break;
            case 7:
                cout << "| |   | || (_____ ";
                break;
            case 6:
                cout << "( (   ) )(_____  )";
                break;
            case 5:
                cout << " \\ \\_/ /       ) |";
                break;
            case 4:
                cout << "  \\   /  /\\____) |";
                break;
            case 3:
                cout << "   \\_/   \\_______)";
                break;
            default:
                cout << "                  ";
                break;
        }
        cout << "     ";
        for (auto & country : v2){
            if (country->getNumInjured() > (2*i)){
                cout << "O";
            }else if (country->getNumInjured() == (2*i)-1){
                cout << "o";
            }else{
                cout << " ";
            }
            cout << " ";
            if (country->getNumAlive() > (2*i)){
                cout << "M";
            }else if (country->getNumAlive() == (2*i)-1){
                cout << "m";
            }else{
                cout << " ";
            }
            tmp = country->getName().size() - 3 +3;
            for (int k = 0; k < tmp; k++){
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "____";
    for (auto & country : v){
        cout << country->getName() << "___";
    }
    cout << "____________________________";
    for (auto & country : v2){
        cout << country->getName() << "___";
    }
    cout << endl;
}
