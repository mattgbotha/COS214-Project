//
// Created by ethan on 2022/11/03.
//

#ifndef CODE_FACADE_H
#define CODE_FACADE_H
#include "WarEngine.h"


class Facade {
private:
    WarEngine* engine;

public:
    Facade();
    ~Facade();
    void gameStart();
};


#endif //CODE_FACADE_H
