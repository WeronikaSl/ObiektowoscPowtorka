#include <iostream>
#include "Witcher.hpp"


int main()
{
    std::shared_ptr<Monster> kikimora = std::make_shared<Monster>();
    std::shared_ptr<Witcher> Geralt = std::make_shared<Witcher>(kikimora);
    kikimora->setWitcher(Geralt);
    unsigned int amountOfHits = 6;

    for (size_t i = 0; i < amountOfHits; ++i)
    {
        if (kikimora->getHealth() <= 0)
        {
            std::cout << "Kikimora umiera" << std::endl;
            break;
        }
        else if (Geralt->getHealth() <= 0)
        {
            std::cout << "Geralt umiera" << std::endl;
            break;
        }
        else
        {
            Geralt->attack();
            kikimora->attack();
        }

    }
    
}

