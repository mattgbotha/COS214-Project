//
// Created by Ethan on 2022/10/17.
//

#ifndef PEOPLE_H
#define PEOPLE_H

class People{
private:
    PeopleStatus* state;
public:
    virtual int act() = 0;
    People();
    virtual ~People();
};

#endif //PEOPLE_H
