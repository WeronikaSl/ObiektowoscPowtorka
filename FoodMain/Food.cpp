#include "Food.hpp"


Dish::~Dish()
{
}

Spaghetti::Spaghetti(unsigned short kcal)
{

}

unsigned short Spaghetti::getKcal() const
{
    return _kcal;
}

Pizza::Pizza(unsigned short kcal) // : _kcal(kcal) nie działa 
{
    _kcal = kcal;
}

unsigned short Pizza::getKcal() const
{
    return _kcal;
}

Soup::Soup(unsigned short kcal)
{
    _kcal = kcal;
}

unsigned short Soup::getKcal() const
{
    return _kcal;
}

void Person::gainWeight(unsigned short kcal)
{
    _weight += static_cast<double>(kcal/7000.0);
}

void Person::setDish(std::shared_ptr<Dish> dish)
{
    _dish = dish;
}

void Person::eat(std::shared_ptr<Dish> dish)
{
    this->gainWeight(dish->getKcal());
}

double Person::getWeight()
{
    return _weight;
}

