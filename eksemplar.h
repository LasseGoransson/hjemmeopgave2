#ifndef EKSEMPLAR_H
#define EKSEMPLAR_H

#include "bog.h"

class Eksemplar
{
public:
    Eksemplar();
    Eksemplar(int id,Bog OM);

    Bog OM() const;

protected:
    int _id;
    Bog _OM;
};

#endif // EKSEMPLAR_H
