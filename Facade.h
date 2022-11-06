//
// Created by ethan on 2022/11/03.
//

#ifndef CODE_FACADE_H
#define CODE_FACADE_H
#include "WarEngine.h"

/** @author Ethan
 *  @date 3 November 2022
 *
 *  The Façade cleans up management of the WarEngine
 *
 *  @see WarEngine
 */
class Facade {
public:
    Facade();
    ~Facade();
    void gameStart();
};


#endif //CODE_FACADE_H
