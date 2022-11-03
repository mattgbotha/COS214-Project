//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseMiddle.h"

void WarPhaseMiddle::warAlgorithm(WarEngine& x) {
    string playerDecision;

    cout << "Your opponents are..." << endl;
    cout << x.enemies[0]->getName();
    for (int i = 1; i < x.enemies.size(); i++){
        cout << ", " << x.enemies[i]->getName();
    }
    cout << endl;

    cout << "Your allies are..." << endl;
    cout << x.allies[0]->getName();
    for (int i = 1; i < x.allies.size(); i++){
        cout << ", " << x.allies[i]->getName();
    }
    cout << endl;

    choice:
    cout << "What would you like to do?" << endl;
    cout << "ATTACK/REPAIR/HEAL/UNDO - ";
    cin >> playerDecision;

    if (playerDecision == "ATTACK" || playerDecision == "Attack" || playerDecision == "attack"){//attack
        string attackDecision;
        int breakTransport = rand()%10;

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
                cout << "You attacked " << enemy->getName() << " for " << x.player->attack() << endl;

                if (breakTransport >= 2){
                    enemy->breakTransport();
                }
            }
        }

    }
    else if (playerDecision == "REPAIR" || playerDecision == "Repair" || playerDecision == "repair"){//repair
        cout << "You have chosen to repair your transport lines this turn" << endl;
        int transportChance = rand()%10;
        if (transportChance >= 6){
            cout << "You succeeded in repairing your transport lines" << endl;
            x.player->fixTransport();
        }else{
            cout << "Unfortunately you have failed to repair your transport lines" << endl;
            x.player->breakTransport();
        }
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




    x.phase = new WarPhaseLate();
}