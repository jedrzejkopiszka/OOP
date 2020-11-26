#ifndef NON_REPEATABLE_H
#define NON_REPEATABLE_H


class Non_Repeatable: public Vaccine
{
private:
    int which_year_of_life;

public:
    Non_Repeatable(string, string, int, int, int, int);
    ~Non_Repeatable();
    int GetWhichYearOfLife();
    void ToString();
};

#endif // NON_REPEATABLE_H
