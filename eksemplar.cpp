#include "eksemplar.h"

Eksemplar::Eksemplar()
{

}

Eksemplar::Eksemplar(int id, Bog OM)
{
 _id = id;
 _OM = OM;
}

Bog Eksemplar::OM() const
{
    return _OM;
}
