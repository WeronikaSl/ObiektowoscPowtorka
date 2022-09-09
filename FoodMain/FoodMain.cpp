#include "Food.hpp"
#include <iostream>

int main()
{
    //Dish* polimorficznyWskaznik = nullptr;
    std::shared_ptr<Dish> polimorficznyWskaznik;
    Person person;

    std::cout << "Postać waży: " << person.getWeight() << " kg." << std::endl;

    unsigned short userInput = 0;
    std::cout
        << "Menu: 1.Spaghetti 2.Pizza 3.Zupa" << std::endl
        << "Co postać ma zjeść? Wybierz numer: ";
    std::cin >> userInput;

    if (1 == userInput)
    {
        //polimorficznyWskaznik = new Spaghetti(1000);
        polimorficznyWskaznik = std::make_shared<Spaghetti>(1000);
    }
    else if (2 == userInput)
    {
        //polimorficznyWskaznik = new Pizza(2000);
        polimorficznyWskaznik = std::make_shared<Pizza>(2000);
    }
    else if (3 == userInput)
    {
        //polimorficznyWskaznik = new Soup(500);
        polimorficznyWskaznik = std::make_shared<Soup>(500);
    }
    else
    {
        std::cout << "Nie ma takiej opcji :(" << std::endl;
        return -1;
    }
    person.setDish(polimorficznyWskaznik);

    person.eat(polimorficznyWskaznik);
    std::cout << "Teraz postać waży: " << person.getWeight() << " kg." << std::endl;

    //delete polimorficznyWskaznik;
}
