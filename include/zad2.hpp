#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const std::string& s, unsigned f) : Artysta{s, f} {}
    void graj(std::ostream& o) const override { o << "PopGwiazda: " << getPseudonim(); }
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda(const std::string& s, unsigned f) : Artysta{s, f} {}
    void graj(std::ostream& o) const override { o << "RapGwiazda: " << getPseudonim(); }
};

Artysta* stworzArtyste(const std::string& s)
{
    if (s.front() == std::toupper(s.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
}
