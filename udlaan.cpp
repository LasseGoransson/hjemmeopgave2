#include "udlaan.h"

Udlaan::Udlaan()
{

}

Udlaan::Udlaan(dato date, Laaner per, Eksemplar eks)
{
 _lendDate = date;
 _lender = per;
 _eks = eks;

 dato returnDate = dato(_lendDate.getdatoen());
 _returnDate = returnDate;
}


Eksemplar Udlaan::eks() const
{
    return _eks;
}

dato Udlaan::returnDate() const
{
    return _returnDate;
}

Laaner Udlaan::lender() const
{
    return _lender;
}
