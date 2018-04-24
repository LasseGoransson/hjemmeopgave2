#include "bog.h"

Bog::Bog()
{

}

Bog::Bog(string navn, Forfatter OM, int aar)
{
 _navn = navn;
 _forfatter = OM;
 _udgivetAar = aar;
}

string Bog::navn() const
{
    return _navn;
}
