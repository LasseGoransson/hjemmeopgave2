#pragma once
#include <string>
class dato
{
public:
	dato();
	dato(int); // Format: YYYYMMDD
	int getdatoen();
	void setdatoen(int d);
	~dato();
	int getYear();
	int getMonth();
	int getDay();
	int skudAar();
	bool validate();
	int dagIaaret();
	int restdageiAaret();
	int forskelIDage(dato enD);
	int ugedag();
	std::string ugedagTekst();

	int	getKvartal();

    void addnDays(int n);

private:
	void setDatoPlusEn();
	void setDatoMinusEn();

	int datoen;
};

