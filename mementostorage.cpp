//
// Created by Franko Swanepoel on 2022/11/03.
//

#include "mementostorage.h"


void mementostorage::storememento(Memento *mem) {
    themem = mem;
}

Memento *mementostorage::getmem() {
    return themem;
}

mementostorage::~mementostorage() {
    delete themem;
}
