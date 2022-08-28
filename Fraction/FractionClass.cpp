#include "FractionClass.hpp"

Fraction::Fraction(int licznik, int mianownik) : _licznik(licznik), _mianownik(mianownik)
{
}

Fraction Fraction::operator*(Fraction& f)
{
	this->_licznik *= f._licznik;
	this->_mianownik *= f._mianownik;
	return *this;
}

int Fraction::getLicznik() const
{
	return _licznik;
}

int Fraction::getMianownik() const
{
	return _mianownik;
}

std::ostream& operator<<(std::ostream& s, const Fraction& f)
{
	return s << f.getLicznik() << "/" << f.getMianownik();
}
