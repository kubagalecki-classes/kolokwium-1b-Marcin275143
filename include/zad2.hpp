#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:

	PopGwiazda() {};
	PopGwiazda(const string& P, const unsigned int& L) : pseudonim(P), liczba_sluchaczy(L) { pseudonim = "Popgwiazda"; liczba_sluchaczy = 2000; }

	virtual void graj() override { cout << pseudonim << " : " << liczba_sluchaczy; }

private:

	string pseudonim = "Popgwiazda";
	unsigned int liczba_sluchaczy;

};

class RapGwiazda : public Artysta
{
public:

	RapGwiazda() {};
	RapGwiazda(const string& P, const unsigned int& L) : pseudonim(P), liczba_sluchaczy(L) { pseudonim = "Rapgwiazda"; liczba_sluchaczy = 3000; }

	virtual void graj() override { cout << pseudonim << " : " << liczba_sluchaczy; }

private:

	string pseudonim = "Rapgwiazda";
	unsigned int liczba_sluchaczy;

};
