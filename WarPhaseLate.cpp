//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseLate.h"

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
