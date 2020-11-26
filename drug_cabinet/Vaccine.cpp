#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include "Drug.h"
#include "Painkiller.h"
#include "DietarySupplement.h"
#include "Swallowed.h"
#include "Vaccine.h"
#include "Non_Repeatable.h"
#include "Repeatable.h"
#include "RunPandemic.h"

void Vaccine::SetObservationTimeAfterInjection(int observation_time_after_injection){
    this->observation_time_after_injection = observation_time_after_injection;
}

int Vaccine::GetObservationTimeAfterInjection(){
    return observation_time_after_injection;
}
