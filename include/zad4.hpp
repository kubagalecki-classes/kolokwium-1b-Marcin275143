#include "zad1.hpp"

#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

vector <Artysta> stworzZespol (unsigned liczba, const string &obiekt)
{
	vector <Artysta> artysci;
	if (obiekt.size() != liczba)
	{
		throw logic_error("logic error");
	}
//	artysci.resize(liczba);
	artysci.reserve(liczba);
	for (int i = 0; i < liczba; ++i)
	{
		artysci.push_back(obiekt, i + 1);
	}
	return artysci;
}
// tutaj funkcja stworzZespol
