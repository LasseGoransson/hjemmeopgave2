#ifndef UDLAAN_H
#define UDLAAN_H

#include "dato.h"
#include "laaner.h"
#include "eksemplar.h"

class Udlaan
{
public:
    Udlaan();
    Udlaan(dato date,Laaner per,Eksemplar eks);
    Eksemplar eks() const;

    dato returnDate() const;

protected:
    dato _lendDate;
    dato _returnDate;
    Laaner _lender;
    Eksemplar _eks;

};

#endif // UDLAAN_H
