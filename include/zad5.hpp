#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

//class Porownaj : public Artysta { public: bool& operator<(Artysta& a) { if (a.get_liczba_sluchaczy() > 1000) true ? false; } } porownanie;

template <typename Typ>
unsigned liczPopularnych(Typ T1, Typ T2)
{
//	vector <Artysta> popularni;
//	A1 = popularni.begin();
//	A2 = popularni.end();
  	return count_if(T1, T2, [](const Artysta &A) {return A.getSluchacze() > 1000;});
}

// tutaj algorytm liczPopularnych(T begin, T end)
