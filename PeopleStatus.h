//
// Created by ethan on 2022/10/17.
//

#ifndef PEOPLE_STATUS_H
#define PEOPLE_STATUS_H

/** @author Ethan
 * @date 17 October 2022
 *
 * Represents the status of a People object - alive, dead or injured.
 */
class PeopleStatus{ //Alive,Dead,Injured states
public:
    virtual ~PeopleStatus();
    virtual int handle(int dmg) = 0;
};

#endif //PEOPLE_STATUS_H
