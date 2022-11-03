//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_MEMENTOSTORAGE_H
#define COS214_PROJECT_MEMENTOSTORAGE_H

#include "Memento.h"


class mementostorage {
private:
    Memento* themem;

   void storememento(Memento* mem);
   Memento* getmem();

   ~mementostorage();


};


#endif //COS214_PROJECT_MEMENTOSTORAGE_H
