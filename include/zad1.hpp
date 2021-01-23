#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Artysta
{
public:
	
	Artysta() : pseudonim("Anonim"), liczba_sluchaczy(0) {};
	Artysta(const string& A, unsigned L) : pseudonim(A), liczba_sluchaczy(L) {};

	void graj(ostream& os) { os << pseudonim << " : " << liczba_sluchaczy; }

	string get_pseudonim() { return pseudonim; }
	unsigned get_liczba_sluchaczy() { return liczba_sluchaczy; }

	~Ąrtysta() {};
	
private:

	string pseudonim;
	unsigned liczba_sluchaczy;
};
// tutaj klasa Artysta
