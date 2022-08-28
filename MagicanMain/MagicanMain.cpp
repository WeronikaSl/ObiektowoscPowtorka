#include <iostream>
#include "Magican.hpp"


int main()
{
    //Magican m1(100, "Spell");
    Yennefer y1(150, "FireSpell", 10);
    //Istredd i1(150, "WaterSpell", 2);
    lilMagican lm (100, "Windspell", 1, 4);

    y1.operator+(5);
    std::cout << y1.getNumOfQuests() << std::endl;
    y1 + 5;
    std::cout << y1.getNumOfQuests() << std::endl;
    std::cout << y1 << std::endl;

}
