#ifndef BIBLIOTEK_H
#define BIBLIOTEK_H
#include "udlaan.h"
#include "eksemplar.h"
#include <vector>

using namespace std;
class Bibliotek
{
public:
    Bibliotek();

    void tilfoejEks(Eksemplar eks);
    void tilfoejUdl(Udlaan udl);

    int tjekOmBogErTilgaengelig(const string&);
    void listLaanersLaan(const string&);

protected:
    vector<Eksemplar> _eksVec;
    vector<Udlaan> _udlVec;
};

#endif // BIBLIOTEK_H
