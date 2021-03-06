#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Artysta
{
    string      name;
    unsigned    fans;

public:
    
    Artysta() : name{"Anonim"}, fans{0} {}
    Artysta(const string& s, unsigned f) : name{s}, fans{f} {}
    virtual ~Artysta() = default;

    virtual void       graj(ostream& o) const { o << name << ": " << fans; }
    const string&      getPseudonim() const { return name; }
    unsigned           getSluchacze() const { return fans; }
};
