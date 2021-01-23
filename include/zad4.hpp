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
		throw logic_error("logic error");
	}
	liczba = artysci.size();
	Artysta artysta_1 = Artysta(obiekt, 1);
	Artysta artysta_2 = Artysta(obiekt, 2);
	Artysta artysta_3 = Artysta(obiekt, 3);
	artysci.push_back(artysta_1);
	artysci.push_back(artysta_2);
	artysci.push_back(artysta_3);
	return artysci;
}
// tutaj funkcja stworzZespol
