#ifndef DRUG_H
#define DRUG_H

using namespace std;

class Drug {
private:
    string id;
    string name;
    int unit_dose;
    int supply_in_units;

public:

    void SetId(string);
    void SetName(string);
    void SetUnit_dose(int);
    void SetSupply_in_units(int);

    string GetId();
    string GetName();
    int GetUnit_dose();
    int GetSupply_in_units();

    string ToString();


};

#endif // DRUG_H
