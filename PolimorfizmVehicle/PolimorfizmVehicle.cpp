#include "Vehicle.hpp"
#include <iostream>

int main()
{
    std::shared_ptr<Vehicle> vehicle;
    std::cout << "Wybierz pojazd. 1 to samochód, 2 to ciężarówka. Jeśli wybierzesz coś innego domyślnie zostanie wybrana ciężarówka. Twój wybór: ";
    unsigned short userInput = 0;
    std::cin >> userInput;
    if (1 == userInput)
    {
        vehicle = std::make_shared<Car>();
    }
    else
    {
        vehicle = std::make_shared<Truck>();
    }

    vehicle->drive();
}
