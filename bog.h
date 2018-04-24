#ifndef BOG_H
#define BOG_H

#include "forfatter.h"
#include <string>

class Bog
{
public:
    Bog();
    Bog(string navn, Forfatter OM, int aar);

    string navn() const;

protected:
    string _navn;
    Forfatter _forfatter;
    int _udgivetAar;
};

#endif // BOG_H
