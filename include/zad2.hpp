#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:

	PopGwiazda(const string& P, unsigned L) : Artysta(P, L) {};

	void graj(ostream &os) override { os << "Popgwiazda: " << getPseudonim(); }
};

class RapGwiazda : public Artysta
{
public:

	RapGwiazda(const string& P, unsigned L) : Artysta(P, L) {};

	void graj(ostream &os) override { os << "Rapgwiazda: " << getPseudonim(); }
};

Artysta* stworzArtyste(string& obiekt)
{
	if (obiekt.front() == toupper(obiekt.front()) ) return new PopGwiazda("BTS", 1234);
	else return new RapGwiazda("Ye", 4321);
}
