#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Artysta
{
public:

	Artysta() {};
	Artysta(const string& A, const unsigned int& L) : pseudonim(A), liczba_sluchaczy(L) {};

	void graj(const ostream& os) { os << pseudonim << " : " << liczba_sluchaczy; }
//	virtual void graj(const ostream& os) = 0;

	string get_pseudonim() { return pseudonim; }
	unsigned int get_liczba_sluchaczy() { return liczba_sluchaczy; }

private:

	string pseudonim = "Anonim";
	unsigned int liczba_sluchaczy = 0;
};
// tutaj klasa Artysta
