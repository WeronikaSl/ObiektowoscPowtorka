#include "Weapon.hpp"

double Weapon::price = 100;
int Weapon::objCount = 0;

Weapon::Weapon()
{
	objCount++;
}

Weapon::~Weapon()
{
	objCount--;
}

int Weapon::getObjCount()
{
	return objCount;
}

MachineGun::MachineGun()
{
	objCount++;
}

MachineGun::~MachineGun()
{
	objCount--;
}

blueMachineGun::blueMachineGun()
{
	objCount++;
}

blueMachineGun::~blueMachineGun()
{
	objCount--;
}
