#pragma once

#include "zad1.hpp"

template <class Instrument>
class ArtystaPlusInstrument
{
public:

	ArtystaPlusInstrument() {};
	ArtystaPlusInstrument(const Artysta* &A, const Instrument &I) : a(A), i(I) {};

	unsigned koncert() { return(i.liczbaUczestnikow(a.liczba_sluchaczy)); }

private:

	Artysta* a;
	Instrument i;
};
//tutaj szablon ArtystaPlusInstrument
