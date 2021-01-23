#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Artysta
{
public:

//	Artysta() {};
	Artysta() : pseudonim("Anonim"), liczba_sluchaczy(0) {};
	Artysta(const string& A, const unsigned int& L) : pseudonim(A), liczba_sluchaczy(L) {};

//	friend ostream& operator << (const ostream& os, const Artysta& A) { os << A.pseudonim << " : " << A.liczba_sluchaczy; return os; }

	void graj(ostream& os) { os << pseudonim << " : " << liczba_sluchaczy; }
//	virtual void graj() = 0;

	string get_pseudonim() { return pseudonim; }
	unsigned int get_liczba_sluchaczy() { return liczba_sluchaczy; }

private:

	string pseudonim = "Anonim";
	unsigned int liczba_sluchaczy = 0;
};
// tutaj klasa Artysta
