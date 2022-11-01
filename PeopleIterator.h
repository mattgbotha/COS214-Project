//
// Created by ethan on 2022/10/27.
//

#ifndef CODE_PEOPLE_ITERATOR_H
#define CODE_PEOPLE_ITERATOR_H
#include <vector>

/** @author Ethan
 *  @date 27 October 2022
 *
 *  The PeopleIterator class is used to access the elements of
 *      People objects (Medics, Soldiers and Citizens)
 */
class People;

class PeopleIterator {
    friend class People;
public:
    PeopleIterator(std::vector<People*> vec);
    People* end;

    People& get();
    People& at(int x);

protected:
    People* current;
    std::vector<People*> v;
};


#endif //CODE_PEOPLE_ITERATOR_H
