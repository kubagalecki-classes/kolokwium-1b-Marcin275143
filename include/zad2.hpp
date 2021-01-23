#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:

	PopGwiazda(const string& P, unsigned L) : Artysta(P, L) {};

	virtual void graj(ostream &os) override { os << "Popgwiazda: " << get_pseudonim(); }
};

class RapGwiazda : public Artysta
{
public:

	RapGwiazda(const string& P, unsigned L) : Artysta(P, L) {};

	virtual void graj(ostream &os) override { os << "Rapgwiazda: " << get_pseudonim(); }
};

Artysta* stworzArtyste(string& obiekt)
{
	Artysta* artysta;
	char a = obiekt.front();
	if (toupper(obiekt.front()) == a) artysta = &PopGwiazda("BTS", 1234);
	else artysta = &RapGwiazda("Ye", 4321);
	return artysta;
}
