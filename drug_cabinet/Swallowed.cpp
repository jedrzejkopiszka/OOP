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


void Swallowed::SetForm(string form){
    this->form = form;
}

string Swallowed::GetForm(){
    return form;
}
