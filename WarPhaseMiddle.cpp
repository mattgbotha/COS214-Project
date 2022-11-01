//
// Created by ethan on 2022/10/31.
//

#include "WarPhaseMiddle.h"

void WarPhaseMiddle::warAlgorithm(WarEngine& x) {
    cout << "Middle" << endl;
    cout << x.countries[0]->getName() << endl;
    cout << x.countries[0]->attack() << endl;
    x.countries[0]->defend(x.countries[0]->attack());
}
