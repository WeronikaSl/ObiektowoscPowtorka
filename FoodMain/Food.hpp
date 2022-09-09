#pragma once
#include <memory>

class Person;

class Dish
{
protected:
	unsigned short _kcal = 0;
public:
	virtual unsigned short getKcal() const = 0;
	virtual ~Dish();
};

class Spaghetti : public Dish
{
public:
	Spaghetti(unsigned short kcal);
	unsigned short getKcal() const override;

};

class Pizza : public Dish
{
public:
	Pizza(unsigned short kcal);
	unsigned short getKcal() const override;

};

class Soup : public Dish
{
public:
	Soup(unsigned short kcal);
	unsigned short getKcal() const override;

};



class Person
{
	std::shared_ptr<Dish> _dish;
	double _weight = 70; // zakładamy, że 1 kg to 7000 kcal
public:
	void setDish(std::shared_ptr<Dish> dish);
	void gainWeight(unsigned short kcal);
	void eat(std::shared_ptr<Dish> dish);
	double getWeight();

};