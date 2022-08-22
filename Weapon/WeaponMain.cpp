#include <iostream>
#include "Weapon.hpp"

int main()
{
	Weapon w1;
	Weapon w2;

	std::cout << Weapon::getObjCount() << std::endl;
	w2.~Weapon();
	std::cout << Weapon::getObjCount() << std::endl;
	MachineGun mg;
	std::cout << MachineGun::getObjCount() << std::endl;
	mg.~MachineGun();
	std::cout << MachineGun::getObjCount() << std::endl;
	blueMachineGun bmg;
	std::cout << blueMachineGun::getObjCount() << std::endl;
	bmg.~blueMachineGun();
	std::cout << blueMachineGun::getObjCount() << std::endl;






}
