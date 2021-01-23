#include "zad1.hpp"

#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

vector <Artysta> stworzZespol (int liczba, string &obiekt)
{
	vector <Artysta> artysci;
	if (obiekt.length() != liczba)
	{
		try { throw logic_error("logic error"); }
		catch (exception& e) { cout << "Rzucono wyjatek"; }
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
