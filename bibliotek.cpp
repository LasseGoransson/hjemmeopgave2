#include "bibliotek.h"
#include <iostream>

Bibliotek::Bibliotek()
{

}

void Bibliotek::tilfoejEks(Eksemplar eks)
{
    _eksVec.push_back(eks);
}

void Bibliotek::tilfoejUdl(Udlaan udl)
{
    _udlVec.push_back(udl);
}

int Bibliotek::tjekOmBogErTilgaengelig(const string& title)
{
    int vecSize_eks = _eksVec.size();

    vector<int> matches_eks;

    for (int i=0;i<vecSize_eks;i++)
    {
        if (_eksVec[i].book().navn() == title)
        {
            matches_eks.push_back(i);
        }
    }



    int vecSize_udl = _udlVec.size();

    vector<int> matches_udl;

    for (int i=0;i<vecSize_udl;i++)
    {
        if (_udlVec[i].eks().book().navn() == title)
        {
            matches_udl.push_back(i);
        }
    }

    if (matches_eks.size() > matches_udl.size())
    {
        // At least one book is free
        return 0;
    }
    else
    {
        // No book is free find the first avaliable
        dato today(20180423);
        int shortestDays=0;
        for (int i=0;i<matches_udl.size();i++)
        {
            dato returnDate = _udlVec[matches_udl[i]].returnDate();
            if (shortestDays == 0)
            {
                shortestDays=today.forskelIDage(returnDate);
            }
            else
            {

                if (today.forskelIDage(returnDate) < shortestDays)
                {
                    shortestDays=today.forskelIDage(returnDate);
                }
            }

        }
        today.addnDays(shortestDays);
        return today.getdatoen();

    }




}

void Bibliotek::listLaanersLaan(const string& navn)
{

    int vecSize = _udlVec.size();
    cout << navn << endl;
    for (int i=0;i<vecSize;i++)
    {
        if (_udlVec[i].lender().getName() == navn)
        {
            cout << _udlVec[i].eks().book().navn() << endl;
        }
    }



}
