#include "Witcher.hpp"
#include <iostream>

Witcher::Witcher(Monster* kikimora) : _Kikimora(kikimora)
{}

int Witcher::getAttackPower()
{
    return _attackPower;
}

void Witcher::hpLoss()
{
    _healthPoints -= _Kikimora->getAttackPower();
    std::cout << "Geralt traci 20 HP" << std::endl;
}

int Witcher::getHealth()
{
    return _healthPoints;
}

void Witcher::attack()
{
    std::cout << "Geralt atakuje kikimorę" << std::endl;
    _Kikimora->hpLoss();
}


void Monster::setWitcher(Witcher* geralt)
{
    _Geralt = geralt;
}

int Monster::getAttackPower()
{
    return _attackPower;
}

void Monster::hpLoss()
{
    _healthPoints -= _Geralt->getAttackPower();
    std::cout << "Kikimora traci 40 HP" << std::endl;

}

int Monster::getHealth()
{
    return _healthPoints;
}

void Monster::attack()
{
    std::cout << "Kikimora atakuje Geralta" << std::endl;
    _Geralt->hpLoss();
}


