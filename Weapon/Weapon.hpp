#pragma once

class Weapon
{
protected:
	static double price;
	static int objCount;
public:
	Weapon();
	~Weapon();
	static int getObjCount();
};

class MachineGun : public Weapon //tutaj pole price jest jako protected
{
public:
	MachineGun();
	~MachineGun();
};

class AssultRifle : protected Weapon //tutaj pole price jest jako private
{
	double getPrice()
	{
		return price;
	}
};

class Pistole : private Weapon
{
	double getPrice()
	{
		return price;
	}
};

class blueMachineGun : public MachineGun
{
public:
	blueMachineGun();
	~blueMachineGun();
	double getPrice()
	{
		return price;
	}
};

class blueAssultRifle : public AssultRifle
{
	double getPrice()
	{
		return price;
	}
};

class bluePistole : public Pistole
{
	double getPrice()
	{
		//return price;
	}
};

