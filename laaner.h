#ifndef LAANER_H
#define LAANER_H

#include "person.h"
#include <string>

class Laaner : public Person
{
public:
    Laaner();
    Laaner(string navn, int nummer);

protected:
    int _nummer;
};

#endif // LAANER_H
