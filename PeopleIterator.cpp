//
// Created by ethan on 2022/10/27.
//

#include "PeopleIterator.h"
#include "People.h"

/**Initialisation for the current end and c members, set to the argument.
 *
 * @param vec The vector containing the People objects
 */
PeopleIterator::PeopleIterator(std::vector<People*> vec) {
    current = vec.front();
    end = vec.back();
    v = vec;
}

/** Obtain the current People object
 *
 * @return People object which current is pointing to
 */
People &PeopleIterator::get() {
    return *current;
}

/** Obtain a People object at a certain index in the vector
 *
 * @param x Index of object to return
 * @return People object at index x in the vector
 */
People &PeopleIterator::at(int x) {
    current = v.at(x);
    return *current;
}