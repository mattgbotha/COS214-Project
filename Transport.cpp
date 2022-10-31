//
// Created by Franko Swanepoel on 2022/10/24.
//

#include "Transport.h"

void Transport::request() {
    state->handle();
}
