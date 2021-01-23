#include "zad1.hpp"

#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

vector <Artysta> stworzZespol (int liczba, const string &obiekt)
{
	vector <Artysta> artysci;
	if (obiekt.length() != liczba)
	{
		throw logic_error{"logic error"};
	}
	artysci.reserve(liczba);
	for int(i = 0; i < liczba; i++)
	{
		Artysta artysta = Artysta(obiekt, i + 1);
		artysci.push_back(artysta);
	}
	return artysci;
}
// tutaj funkcja stworzZespol
