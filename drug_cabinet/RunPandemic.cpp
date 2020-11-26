#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <memory>
#include "Drug.h"
#include "Painkiller.h"
#include "DietarySupplement.h"
#include "Swallowed.h"
#include "Vaccine.h"
#include "Non_Repeatable.h"
#include "Repeatable.h"
#include "Cabinet.h"
#include "RunPandemic.h"


void RunPandemic::Pandemic(float pDisease, float pRecovery, Cabinet<Drug>& cabinet){
    while(1){
        vector<Drug> to_be_deleted;
        for(int i=0; i<cabinet.drugs.size(); i++){
            if(rand()%100<pDisease*100){
                to_be_deleted.push_back(cabinet.drugs[i]);
                cout<<"Element being removed is: "<<to_be_deleted.back().ToString()<<". Size of cabinet before: "<<cabinet.drugs.size()<<" after: ";
                cabinet.drugs.erase(cabinet.drugs.begin()+i);
                cout<<cabinet.drugs.size()<<endl;

                if(rand()%100<(1-pRecovery)*100){
                    cabinet.drugs.push_back(to_be_deleted.back());
                    cout<<"Element "<<cabinet.drugs.back().ToString()<<" goes back to the cabinet. Drugs left: "<<cabinet.drugs.size()<<endl;
                }
            }
            cout<<"This drug was not selected to be removed"<<endl;
        }
        if(cabinet.drugs.size()==0){
            cout<<endl<<"CABINET IS EMPTY"<<endl<<"**********************************"<<endl;
            break;
        }
        else{
            cabinet.PrintDrugs();
        }
        cout<<endl<<"*****************************"<<endl<<"NEXT ITERATION"<<endl<<endl;
    }
}


