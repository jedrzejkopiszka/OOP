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

template <class T>
Cabinet<T>::Cabinet()
{
}

template <class T>
Cabinet<T>::~Cabinet()
{
    cout<<"Cabinet deconstructor"<<endl;
}

template <class T>
void Cabinet<T>::AddDrug(T& drug){
    drugs.push_back(drug);
}

template <class T>
void Cabinet<T>::PrintDrugs(){
    cout<<"ALL DRUGS IN CABINET:  "<<endl;
    for(int i=0; i<drugs.size(); i++){
        cout<<drugs[i].ToString()<<endl;
    }
}

template <class T>
vector<T> Cabinet<T>::GetDrugs(){
    return drugs;
}


template class Cabinet<Drug>;
