//
// Created by Franko Swanepoel on 2022/11/03.
//

#ifndef COS214_PROJECT_STATEMEM_H
#define COS214_PROJECT_STATEMEM_H

class stateMem {
private:
    TransportState *transportstate;
  //  People *peoplearray;
   // Citizen saveCit;
    vector<People*> saceCit;


public:

    stateMem(TransportState *ts, vector<People*> parray) {
        transportstate = ts;
        saceCit = parray;

    }

    stateMem(const stateMem &s) {
        saceCit = s.saceCit;
        transportstate = s.transportstate;
    }

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
