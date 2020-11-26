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

Repeatable::Repeatable(string id, string name, int unit_dose, int supply_in_units, int observation_time_after_injection, int minimum_age, int time_between_repetition)
{
    Drug::SetId(id);
    Drug::SetName(name);
    Drug::SetUnit_dose(unit_dose);
    Drug::SetSupply_in_units(supply_in_units);
    Vaccine::SetObservationTimeAfterInjection(observation_time_after_injection);
    this->minimum_age = minimum_age;
    this->time_between_repetition = time_between_repetition;
}

Repeatable::~Repeatable()
{
}

int Repeatable::GetMinimumAge(){
    return minimum_age;
}

int Repeatable::GetTimeBetweenRepetition(){
    return time_between_repetition;
}

void Repeatable::ToString(){
    string drug_to_string = Drug::ToString();
    string vaccine_string = to_string(Vaccine :: GetObservationTimeAfterInjection());
    string age_string = to_string(GetMinimumAge());
    string time_string = to_string(GetTimeBetweenRepetition());

    cout<<"Repeatable: "<<drug_to_string<<" observation time: "<<vaccine_string<<" minimum age: "<<age_string<<" time between repetition: "<<time_string<<endl;
}
