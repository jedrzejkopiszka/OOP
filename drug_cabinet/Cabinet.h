#ifndef CABINET_H
#define CABINET_H
#include "Drug.h"

template <class T>
class Cabinet
{
private:


public:
    vector <T> drugs;
    Cabinet();
    ~Cabinet();
    void AddDrug(T& drug);
    void PrintDrugs();

    vector<T> GetDrugs();

};

#endif // CABINET_H
