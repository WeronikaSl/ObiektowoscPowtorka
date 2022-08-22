#pragma once
#include <string>

class Magican
{
	int _hp = 0;
	std::string _mainAttack = {};
public:
	Magican(int hp, std::string mainAttack);
	Magican();

};

class Yennefer : public virtual Magican
{
	int _numOfQuests = 0;
public:
	Yennefer(int hp, std::string mainAttack, int numOfQuests);

};

class Istredd : public virtual Magican
{
	int _numOfQuests = 0;
public:
	Istredd(int hp, std::string mainAttack, int numOfQuests);
	Istredd();

};
class lilMagican : public Yennefer, public Istredd
{
	int _x = 0;
public:
	lilMagican(int hp, std::string mainAttack, int numOfQuests, int x);
};