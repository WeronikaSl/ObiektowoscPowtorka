#pragma once
class Monster;

class Witcher
{
private:
    Monster* _Kikimora = nullptr;
    int _healthPoints = 150;
    static const int _attackPower = 40;
public:
    Witcher(Monster* kikimora);
    int getAttackPower();
    void hpLoss();
    int getHealth();
    void attack();


};
class Monster
{
private:
    Witcher* _Geralt = nullptr;
    int _healthPoints = 100;
    static const int _attackPower = 20;
public:
    void setWitcher(Witcher* geralt);
    int getAttackPower();
    void hpLoss();
    int getHealth();
    void attack();


};