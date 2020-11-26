#ifndef VACCINE_H
#define VACCINE_H


class Vaccine : public Drug
{
private:
    int observation_time_after_injection;

public:
    void SetObservationTimeAfterInjection(int);
    int GetObservationTimeAfterInjection();
};

#endif // VACCINE_H
