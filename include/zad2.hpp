#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const string& s, unsigned f) : Artysta{s, f} {}
    virtual void graj(ostream& o) const override { o << "PopGwiazda: " << getPseudonim(); }
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda(const string& s, unsigned f) : Artysta{s, f} {}
    virtual void graj(ostream& o) const override { o << "RapGwiazda: " << getPseudonim(); }
};

Artysta* stworzArtyste(const string &obiekt)
{
    Artysta *artysta;
    if (obiekt.front() == toupper(obiekt.front())) artysta = new PopGwiazda{"BTS", 1234};
    else artysta = new RapGwiazda{"Ye", 4321};
    return artysta;
}
