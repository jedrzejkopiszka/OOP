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

void Drug::SetId(string id){
    this->id = id;
}

void Drug::SetName(string name){
    this->name = name;
}

void Drug::SetUnit_dose(int unit_dose){
    this->unit_dose = unit_dose;
}

void Drug::SetSupply_in_units(int supply_in_units){
    this->supply_in_units = supply_in_units;
}


string Drug::GetId(){
    return id;
}

string Drug::GetName(){
    return name;
}

int Drug::GetUnit_dose(){
    return unit_dose;
}

int Drug::GetSupply_in_units(){
    return supply_in_units;
}


string Drug::ToString(){
    return "ID "+GetId()+" Name: "+GetName();
}
