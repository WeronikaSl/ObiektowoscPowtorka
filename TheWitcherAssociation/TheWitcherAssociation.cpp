#include <iostream>
#include "Witcher.hpp"


int main()
{
    Monster kikimora;
    Witcher Geralt(&kikimora);
    kikimora.setWitcher(&Geralt);
    unsigned int amountOfHits = 6;

    for (size_t i = 0; i < amountOfHits; ++i)
    {
        if (kikimora.getHealth() <= 0)
        {
            std::cout << "Kikimora umiera" << std::endl;
            break;
        }
        else if (Geralt.getHealth() <= 0)
        {
            std::cout << "Geralt umiera" << std::endl;
            break;
        }
        else
        {
            Geralt.attack();
            kikimora.attack();
        }

    }
    
}

