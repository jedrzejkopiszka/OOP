#ifndef PAINKILLER_H
#define PAINKILLER_H
#include "Swallowed.h"


class Painkiller : public Swallowed
{
private:
    int time_before_sleep;
    int times_a_day;

public:
    Painkiller(string, string, int, int, string, int, int); //id, name, dose, supply, form, before_sleep, times_a_day
    ~Painkiller();

    int GetTimeBeforeSleep();
    int GetTimesADay();
    void ToString();

};

#endif // PAINKILLER_H
