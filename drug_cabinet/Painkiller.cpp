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

using namespace std;

Painkiller::Painkiller(string id, string name, int unit_dose, int supply_in_units, string form, int time_before_sleep, int times_a_day)
{
    Drug::SetId(id);
    Drug::SetName(name);
    Drug::SetUnit_dose(unit_dose);
    Drug::SetSupply_in_units(supply_in_units);
    Swallowed::SetForm(form);
    this->time_before_sleep = time_before_sleep;
    this->times_a_day = times_a_day;
}

Painkiller::~Painkiller()
{
}

int Painkiller::GetTimeBeforeSleep(){
    return time_before_sleep;
}

int Painkiller::GetTimesADay(){
    return times_a_day;
}

void Painkiller::ToString()
{
    string drug_to_string = Drug::ToString();
    string form_string = Swallowed :: GetForm();
    string before_sleep = to_string(GetTimeBeforeSleep());
    string times_day = to_string(GetTimesADay());
    cout<<"Painkiller: "<<drug_to_string<<" form: "<<form_string<<"take before sleep: "<<before_sleep<<" times a day "<<times_day<<endl;
}
