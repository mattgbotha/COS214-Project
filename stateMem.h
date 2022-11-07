//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_STATEMEM_H
#define COS214_PROJECT_STATEMEM_H

/**
 * @author Amicke
 * @date 2022/11/03
 *
 * StateMem class will be used to clone the vector array of People objects then will be saved
 */

class stateMem {
private:
    /**
     * @param transportstate - TransportState object
     */
    TransportState *transportstate;
  //  People *peoplearray;
   // Citizen saveCit;
   /**
    * @param saveCit - vector that stores People objects to be cloned
    */
    vector<People*> saveCit;


public:

    /**
     * @brief constructor of SateMem to initialize the TransportState object and vector with passed in parameters
     * @param ts to initialize the TransportState object
     * @param parray to initialize the vector array
     */
    stateMem(TransportState *ts, vector<People*> parray) {
        transportstate = ts;
        saveCit = parray;

    }

    /**
     * @brief constructor to initialize a new object that is passed through as parameter
     * @param s to initialize the stateMem object with the trasnportstate and the vector of People objects
     */
    stateMem(const stateMem &s) {
        saveCit = s.saveCit;
        transportstate = s.transportstate;
    }

    /**
     * @brief loops through the vector of People objects while outputting each person's state, the transportstate object of the country is then printed
     */
    void showstate()
    {
        cout<<"States: "<<endl;
        for (int i = 0; i < saveCit.size(); ++i) {
            cout<<saveCit[i]->state<<endl;
        }
        cout<<"Transportstate of country is : "<<transportstate;

    }
};



#endif //COS214_PROJECT_STATEMEM_H
