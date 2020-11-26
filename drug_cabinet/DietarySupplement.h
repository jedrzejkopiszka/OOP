#ifndef DIETARYSUPPLEMENT_H
#define DIETARYSUPPLEMENT_H
#include "Swallowed.h"

class DietarySupplement : public Swallowed
{
private:
        bool is_placebo;
public:
    DietarySupplement(string, string, int, int, string, bool);
    ~DietarySupplement();

    bool GetIsPlacebo();
    void ToString();
};

#endif // DIETARYSUPPLEMENT_H
