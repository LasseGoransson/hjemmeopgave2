#include "eksemplar.h"

Eksemplar::Eksemplar()
{

}

Eksemplar::Eksemplar(int id, Bog OM)
{
 _id = id;
 _book = OM;
}

Bog Eksemplar::book() const
{
    return _book;
}

