#include "forfatter.h"

Forfatter::Forfatter()
{

}

Forfatter::Forfatter(string navn, string nation, int foedaar, int doedsaar): Person(navn)
{
 _nation = nation;
 _foedaar = foedaar;
 _dodsaar = doedsaar;
}
