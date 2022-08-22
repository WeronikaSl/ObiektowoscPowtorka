#pragma once

class Person;

class Dish
{
private:
	Person* _person;
protected:
	unsigned short _kcal = 0;
public:
	virtual unsigned short getKcal() const = 0;
	void setPerson(Person* person);
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
	Dish* _dish;
	double _weight = 70; // zakładamy, że 1 kg to 7000 kcal
public:
	void setDish(Dish* dish);
	void gainWeight(unsigned short kcal);
	void eat(Dish* dish);
	double getWeight();

};