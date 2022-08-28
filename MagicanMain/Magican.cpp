#include "Magican.hpp"
#include <iostream>

Magican::Magican(int hp, std::string mainAttack) : _hp(hp), _mainAttack(mainAttack)
{
	std::cout << "Magican constructor" << std::endl;
}

Magican::Magican()
{
	std::cout << "Magican constructor" << std::endl;

}

Yennefer::Yennefer(int hp, std::string mainAttack, int numOfQuests) : Magican::Magican(hp,mainAttack), _numOfQuests(numOfQuests)
{
	std::cout << "Yennefer constructor" << std::endl;

}

Yennefer Yennefer::operator+(int numOfQuests)
{
	this->_numOfQuests += numOfQuests;
	return *this;
}

int Yennefer::getNumOfQuests() const
{
	return _numOfQuests;
}

Istredd::Istredd(int hp, std::string mainAttack, int numOfQuests) : Magican::Magican(hp, mainAttack), _numOfQuests(numOfQuests)
{
	std::cout << "Istredd constructor" << std::endl;

}

Istredd::Istredd()
{
	std::cout << "Istredd constructor" << std::endl;

}

lilMagican::lilMagican(int hp, std::string mainAttack, int numOfQuests, int x) : Yennefer::Yennefer(hp, mainAttack, numOfQuests), _x(x)
{
}

std::ostream& operator<<(std::ostream& s, Yennefer& y)
{
	return s << y.getNumOfQuests();
}
