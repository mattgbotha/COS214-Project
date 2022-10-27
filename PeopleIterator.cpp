//
// Created by ethan on 2022/10/27.
//

#include "PeopleIterator.h"
#include "People.h"

PeopleIterator::PeopleIterator(std::vector<People*> vec) {
    current = vec.front();
    end = vec.back();
    v = vec;
}

People &PeopleIterator::get() {
    return *current;
}

People &PeopleIterator::at(int x) {
    current = v.at(x);
    return *current;
}