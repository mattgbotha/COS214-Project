//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_STATUS_H
#define PEOPLE_STATUS_H

class PeopleStatus{ //Alive,Dead,Injured states
public:
    virtual ~PeopleStatus();
    virtual int handle() = 0;
};

#endif //PEOPLE_STATUS_H
