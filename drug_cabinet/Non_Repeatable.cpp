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

Non_Repeatable::Non_Repeatable(string id, string name, int unit_dose, int supply_in_units, int observation_time_after_injection, int which_year_of_life)
{
    Drug::SetId(id);
    Drug::SetName(name);
    Drug::SetUnit_dose(unit_dose);
    Drug::SetSupply_in_units(supply_in_units);
    Vaccine::SetObservationTimeAfterInjection(observation_time_after_injection);
    this->which_year_of_life = which_year_of_life;
}

Non_Repeatable::~Non_Repeatable()
{
}

int Non_Repeatable::GetWhichYearOfLife(){
    return which_year_of_life;
}

void Non_Repeatable::ToString(){
    string drug_to_string = Drug::ToString();
    string vaccine_string = to_string(Vaccine :: GetObservationTimeAfterInjection());
    string year_string = to_string(GetWhichYearOfLife());
    cout<<"Non Repeatable: "<<drug_to_string<<" observation time: "<<vaccine_string<<"year of life: "<<year_string<<endl;
}
