#ifndef SWALLOWED_H
#define SWALLOWED_H


class Swallowed : public Drug
{
private:
    string form;
public:

    void SetForm(string);

    string GetForm();

};

#endif // SWALLOWED_H
