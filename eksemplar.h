#ifndef EKSEMPLAR_H
#define EKSEMPLAR_H

#include "bog.h"

class Eksemplar
{
public:
    Eksemplar();
    Eksemplar(int id,Bog OM);


    Bog book() const;

protected:
    int _id;
    Bog _book;
};

#endif // EKSEMPLAR_H
