#ifndef REPEATABLE_H
#define REPEATABLE_H


class Repeatable : public Vaccine
{
private:
    int minimum_age;
    int time_between_repetition;

public:
    Repeatable(string, string, int, int, int, int, int);
    ~Repeatable();

    int GetMinimumAge();
    int GetTimeBetweenRepetition();

    void ToString();
};

#endif // REPEATABLE_H
