#include <iostream>

class Candy
{
protected:
	static const int kcal = 100;
	static int getKcal()
	{
		return kcal;
	}
public:
	//int getKcal()
	//{
	//	return kcal;
	//}
	int b = 5;
};

class Chocolate : public Candy
{
	int kcal = 200;
	Candy c1;
public:
	int getKcal()
	{
		return kcal;
	}
	int b = 7;
	void meow()
	{

	}

};

int main()
{
	Chocolate c;
	std::cout << c.Candy::b << std::endl;

}
