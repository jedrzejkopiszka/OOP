#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <memory>
#include <iomanip>
#include "Drug.h"
#include "Painkiller.h"
#include "DietarySupplement.h"
#include "Swallowed.h"
#include "Vaccine.h"
#include "Non_Repeatable.h"
#include "Repeatable.h"
#include "Cabinet.h"
#include "RunPandemic.h"

using namespace std;

void GenerateDrugs(int number_of_drugs, float pDisease, float pRecovery){

    Cabinet <Drug> cab;

    for(int i=0; i<number_of_drugs; i++){
        int random_initializer = rand()%100;
        if(random_initializer<25){
            Painkiller pain("pain"+to_string(i), "Painkiller name"+to_string(i), i, i, "pill", i , i);
            cab.AddDrug(pain);
        }
        else if(random_initializer>=25 && random_initializer<50){
            DietarySupplement diet("diet"+to_string(i), "Dietary name"+to_string(i), i, i, "capsule" , true);
            cab.AddDrug(diet);
        }
        else if(random_initializer>=50 && random_initializer<75){
            Non_Repeatable non_r("nrepeat"+to_string(i), "NoN_repeat name"+to_string(i), i, i, i , i);
            cab.AddDrug(non_r);
        }
        else {
            Repeatable repeat("repeat"+to_string(i), "Repeatable name"+to_string(i), i, i, i, i , i);
            cab.AddDrug(repeat);
        }
    }

    cab.PrintDrugs();
    RunPandemic rp;
    cout<<endl<<"****************************************"<<endl<<"PANDEMIC FUNCTION IS INVOKED: "<<endl<<endl;
    rp.Pandemic(pDisease, pRecovery, cab);

}
template <typename T>
T ValidInput(T& input){

    cin>>setw(1)>>input;

    while(!cin.good()){

        cout<<"Faulty input! Try again";
        cin.clear();
        cin.ignore(INT_MAX, '\n');

        cin>>setw(1)>>input;
    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    return input;
}


int main()
{

    srand(time(NULL));
    try{
        int number_of_drugs;
        float pDisease;
        float pRecovery;

        cout<<"Define number of drugs: ";
        number_of_drugs = ValidInput(number_of_drugs);

        if(number_of_drugs<=0){
            throw 1;
        }

        cout<<"Define pDisease: ";
        pDisease = ValidInput(pDisease);

        if(pDisease<0.0 || pDisease>1.0){
            throw 2;
        }

        cout<<"Define pRecovery: ";
        pRecovery = ValidInput(pRecovery);

        if(pRecovery<0.0 || pRecovery>1.0){
            throw 3;
        }

        GenerateDrugs(number_of_drugs, pDisease, pRecovery);
    }
    catch(int e){
        if(e==1){
            cout<<"Number of drugs defined incorrectly"<<endl;
        }
        else if(e==2){
            cout<<"pDisease defined incorrectly"<<endl;
        }
        else if(e==3){
            cout<<"pRecovery defined incorrectly"<<endl;
        }
    }
    catch(...){
        cout<<"Unknown error!"<<endl;
    }

}
