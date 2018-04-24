#include "dato.h"
#include "forfatter.h"
#include "bog.h"
#include "eksemplar.h"
#include "laaner.h"
#include "udlaan.h"
#include "bibliotek.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
Bibliotek bib;
Forfatter mah("Martin A. Hansen", "dansk", 1909, 1955);
Bog lgn1("Loegneren", mah, 1950);
Eksemplar eks1(1001, lgn1);
Eksemplar eks2(1002, lgn1);
bib.tilfoejEks(eks1);
bib.tilfoejEks(eks2);
Forfatter hp(  "Henrik Pontoppidan",  "dansk", 1857, 1943);
Bog lp(  "Lykke-Per", hp, 1898);
Eksemplar eks3(1011, lp);
bib.tilfoejEks(eks3);
Forfatter jrrt("J.R.R. Tolkien","britisk", 1892, 1973);
Bog fr(  "The Fellowship of the Ring", jrrt, 1954);
Bog tt(  "The two Towers", jrrt, 1954);
Bog rk(  "The Return of the King", jrrt, 1955);
Eksemplar eks4(1021, fr);
Eksemplar eks5(1022, tt);
Eksemplar eks6(1023, rk);
bib.tilfoejEks(eks4);
bib.tilfoejEks(eks5);
bib.tilfoejEks(eks6);
Laaner po("Petrine Ottesen", 101);
Udlaan udl1(dato(20181026), po, eks1);
Udlaan udl2(dato(20181030), po, eks5);
Udlaan udl3(dato(20181029), po, eks3);
bib.tilfoejUdl(udl1);
bib.tilfoejUdl(udl2);
bib.tilfoejUdl(udl3);
Laaner te(  "Torsten Eriksen", 101);
Udlaan udl4(dato(20181019), te, eks4);
Udlaan udl5(dato(20181018), te, eks6);
bib.tilfoejUdl(udl4);
bib.tilfoejUdl(udl5);

cout << bib.tjekOmBogErTilgaengelig("The Fellowship of the Ring") << endl;

bib.listLaanersLaan("Petrine Ottesen");


}
