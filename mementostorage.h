//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_MEMENTOSTORAGE_H
#define COS214_PROJECT_MEMENTOSTORAGE_H

#include "Memento.h"


class mementostorage {
private:
    /**
     * @param themem - a Memento object
     */
    Memento* themem;
    /**
     * @brief save themem as the new passed in Memento object
     * @param mem - Memento object
     */
   void storememento(Memento* mem);
   /**
    * returns the Memento object
    * @return themen
    */
   Memento* getmem();
    /**
     * deletes the Memento object
     */
   ~mementostorage();


};


#endif //COS214_PROJECT_MEMENTOSTORAGE_H
