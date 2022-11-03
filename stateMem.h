//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_STATEMEM_H
#define COS214_PROJECT_STATEMEM_H

/**
 * @author Amicke
 * @date 2022/11/03
 *
 * StateMem represents the transportstate of the country aswell as the saceCit
 */

class stateMem {
private:
    /**
     * @param transportstate
     */
    TransportState *transportstate;
  //  People *peoplearray;
   // Citizen saveCit;
    vector<People*> saceCit;


public:

    /**
     * @brief constructor of SateMem to initialize the trasnportstate object and saceCit vector
     * @param ts to initialize the transportstate object
     * @param parray to initialize the vector array
     */
    stateMem(TransportState *ts, vector<People*> parray) {
        transportstate = ts;
        saceCit = parray;

    }

    /**
     * @brief constructor to initialize a new object that is passed through as parameter
     * @param s to initialize the stateMem object with the trasnportstate and saceCit
     */
    stateMem(const stateMem &s) {
        saceCit = s.saceCit;
        transportstate = s.transportstate;
    }

    /**
     * @brief loops through the saceCit while outputting each saceCit's state, the transportstate object of the country is then printed
     */
    void showstate()
    {
        cout<<"States: "<<endl;
        for (int i = 0; i < saceCit.size(); ++i) {
            cout<<saceCit[i]->state<<endl;
        }
        cout<<"Transportstate of country is : "<<transportstate;

    }
};



#endif //COS214_PROJECT_STATEMEM_H
