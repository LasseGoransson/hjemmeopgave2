#include "dato.h"
#include <iostream>

dato::dato()
{
}

dato::dato(int endato)
{
    datoen = endato;
}

int dato::getdatoen()
{
    return datoen;
}

void dato::setdatoen(int d)
{
    datoen = d;
}

int dato::getYear()
{
    return datoen / 10000;
}

int dato::getMonth()
{
    int monthday = datoen-getYear() * 10000;
    return (monthday / 100);
}

int dato::getDay()
{
    int monthday = datoen - getYear() * 10000;
    int monthoffset = getMonth() * 100;
    return monthday-monthoffset;
}

int dato::skudAar()
{
    int year = getYear();
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


bool dato::validate()
{
    if (getYear() > 2100 || getYear() < 1700)
    {
        return false;
    }
    if (getMonth() > 12 || getMonth() < 1)
    {
        return false;
    }
    if (getDay() > 31 || getDay() < 1)
    {
        return false;
    }


    if (getMonth() == 4 && getDay() > 30)
    {
        return false;
    }

    if (getMonth() == 5 && getDay() > 30)
    {
        return false;
    }

    if (getMonth() == 9 && getDay() > 30)
    {
        return false;
    }

    if (getMonth() == 11 && getDay() > 30)
    {
        return false;
    }


    if (getMonth() == 2 && skudAar() && getDay() > 29)
    {
        return false;
    }

    if (getMonth() == 2 && !skudAar() && getDay() > 28)
    {
        return false;
    }


    return true;

}

int dato::dagIaaret()
{
    switch (getMonth())
    {
    case 1:
        return getDay();

    case 2:
        return getDay() + 31;

    case 3:
        return getDay() + skudAar() + 59;

    case 4:
        return getDay() + skudAar() + 90;

    case 5:
        return getDay() + skudAar() + 120;

    case 6:
        return getDay() + skudAar() + 151;

    case 7:
        return getDay() + skudAar() + 181;

    case 8:
        return getDay() + skudAar() + 212;

    case 9:
        return getDay() + skudAar() + 243;

    case 10:
        return getDay() + skudAar() + 273;

    case 11:
        return getDay() + skudAar() + 304;

    case 12:
        return getDay() + skudAar() + 334;


    }
}

int dato::restdageiAaret()
{
    return skudAar()+365-dagIaaret();
}

int dato::forskelIDage(dato enD)
{
    int i = 0;
    // Check if the new date is in the future or the past
    if (enD.getdatoen() > getdatoen())
    {
        // New date is in the future
        //Create a new dato object to manage this without polution

        dato before(getdatoen());


        while (before.getdatoen() != enD.getdatoen())
        {
            before.setDatoPlusEn();
            i++;
        }


    }
    else
    {
        //New date is in the past
        //Create a new dato object to manage this without polution

        dato before(getdatoen());


        while (before.getdatoen() != enD.getdatoen())
        {
            before.setDatoMinusEn();
            i++;
        }

    }

    return i;
}

int dato::ugedag()
{
    dato magicday(17030101);
    return (forskelIDage(magicday) + 1)%7;
}

std::string dato::ugedagTekst()
{
    switch (ugedag())
    {
        case 1:
            return "Mandag";
        case 2:
            return "Tirsdag";
        case 3:
            return "Onsdag";
        case 4:
            return "Torsdag";
        case 5:
            return "Fredag";
        case 6:
            return "Lørdag";
        case 7:
            return "Søndag";
    }

}

int dato::getKvartal()
{
    return (getMonth() / 4) + 1;
}

void dato::addnDays(int n)
{
    for(int i=0;i<n;i++){
        setDatoPlusEn();
    }
}

void dato::setDatoPlusEn()
{
    datoen++;
    while (!validate())
    {
        datoen++;
    }
}

void dato::setDatoMinusEn()
{
    datoen--;
    while (!validate())
    {
        datoen--;
    }
}






dato::~dato()
{
}
