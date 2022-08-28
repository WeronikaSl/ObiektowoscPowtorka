#include <iostream>
#pragma once

class Fraction
{
private:
	int _licznik = 0;
	int _mianownik = 0;
public:
	Fraction(int licznik, int mianownik);
	Fraction operator* (Fraction& f);
	int getLicznik() const;
	int getMianownik() const;

};

std::ostream& operator<<(std::ostream& s, const Fraction& f);