#ifndef FORFATTER_H
#define FORFATTER_H

#include "person.h"
#include <string>

class Forfatter : public Person
{
public:
    Forfatter();
    Forfatter(string navn,string nation, int foedaar ,int doedsaar);


protected:
    int _dodsaar;
    int _foedaar;
    string _nation;
    string _navn;
};

#endif // FORFATTER_H
