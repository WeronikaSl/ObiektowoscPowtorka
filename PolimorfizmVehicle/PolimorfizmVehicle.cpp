#include "Vehicle.hpp"
#include <iostream>

int main()
{
    Vehicle* vehicle = nullptr;
    std::cout << "Wybierz pojazd. 1 to samochód, 2 to ciężarówka. Jeśli wybierzesz coś innego domyślnie zostanie wybrana ciężarówka. Twój wybór: ";
    unsigned short userInput = 0;
    std::cin >> userInput;
    if (1 == userInput)
    {
        vehicle = new Car();
    }
    else
    {
        vehicle = new Truck();
    }

    vehicle->drive();
}
