//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseLate.h"

/** Determines the victor of the war.
 *      This is done by checking whether allies or enemies are alive and providing output on the defeated.
 * @param x The current war game's WarEngine object
 */
void WarPhaseLate::warAlgorithm(WarEngine& x) {
    cout << "After a long hard fought war that spanned many battles..." << endl;

    if (x.enemiesAlive() && !x.alliesAlive()){
        cout << "Unfortunately the enemy was triumphant and invaded ";
        for (auto & ally : x.allies){
            cout << ally->getName() << ", ";
        }
        cout << endl;
    }

    if (x.alliesAlive() && !x.enemiesAlive()){
        cout << "Miraculously you were victorious over ";
        for (auto & enemy : x.enemies){
            cout << enemy->getName() << ", ";
        }
        cout << endl;
    }

    cout << endl;
}
