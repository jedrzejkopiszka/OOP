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

DietarySupplement::DietarySupplement(string id, string name, int unit_dose, int supply_in_units, string form, bool is_placebo)
{
    Drug::SetId(id);
    Drug::SetName(name);
    Drug::SetUnit_dose(unit_dose);
    Drug::SetSupply_in_units(supply_in_units);
    Swallowed::SetForm(form);
    this->is_placebo = is_placebo;
}

DietarySupplement::~DietarySupplement()
{
}

bool DietarySupplement::GetIsPlacebo(){
    return is_placebo;
}

void DietarySupplement::ToString()
{
    string drug_to_string = Drug::ToString();
    string form_string = Swallowed::GetForm();
    string placebo = to_string(GetIsPlacebo());
    cout<<"Dietary Supplement: "<<drug_to_string<<"form: "<<form_string<<" is placebo: "<<placebo<<endl;
}


