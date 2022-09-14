#include "Food.hpp"
#include <iostream>

enum class TypesOfFood {SPAGHETTI = 1, PIZZA, ZUPA};

int main()
{
    std::shared_ptr<Dish> polimorficznyWskaznik;
    Person person;

    std::cout << "Postać waży: " << person.getWeight() << " kg." << std::endl;

    unsigned short userInput = 0;
    std::cout
        << "Menu: 1.Spaghetti 2.Pizza 3.Zupa" << std::endl
        << "Co postać ma zjeść? Wybierz numer: ";
    std::cin >> userInput;
    TypesOfFood choosenDish = static_cast<TypesOfFood>(userInput);

    switch (choosenDish)
    {
    case TypesOfFood::SPAGHETTI:
        polimorficznyWskaznik = std::make_shared<Spaghetti>(1500);
        break;
    case TypesOfFood::PIZZA:
        polimorficznyWskaznik = std::make_shared<Pizza>(2000);
        break;
    case TypesOfFood::ZUPA:
        polimorficznyWskaznik = std::make_shared<Soup>(500);
        break;
    default:
        std::cout << "Nie ma takiej opcji :(" << std::endl;
        return -1;
        break;
    }

    person.setDish(polimorficznyWskaznik);

    person.eat(polimorficznyWskaznik);
    std::cout << "Teraz postać waży: " << person.getWeight() << " kg." << std::endl;

}
