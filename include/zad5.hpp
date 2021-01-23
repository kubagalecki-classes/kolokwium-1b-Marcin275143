#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

class Porownaj { public: bool& operator<(Artysta& a) { if (a.get_liczba_sluchaczy() > 1000) true ? false; } } porownanie;

template <typename Artysta, typename Artysta>
unsigned liczPopularnych(Artysta A1, Artysta A2)
{
	vector <Artysta> popularni;
	A1 = popularni.begin();
	A2 = popularni.end();
  unsigned liczba_popularnych = count_if(A1, A2, porownanie());
	return liczba_popularnych;
}

// tutaj algorytm liczPopularnych(T begin, T end)
