#pragma once
#include <memory>
class Monster;

class Witcher
{
private:
    std::shared_ptr<Monster> _Kikimora;
    //Monster* _Kikimora = nullptr;
    int _healthPoints = 150;
    static const int _attackPower = 40;
public:
    Witcher(std::shared_ptr<Monster> kikimora);
    int getAttackPower();
    void hpLoss();
    int getHealth();
    void attack();


};
class Monster
{
private:
    std::shared_ptr<Witcher> _Geralt;
    //Witcher* _Geralt = nullptr;
    int _healthPoints = 100;
    static const int _attackPower = 20;
public:
    void setWitcher(std::shared_ptr<Witcher> geralt);
    int getAttackPower();
    void hpLoss();
    int getHealth();
    void attack();


};