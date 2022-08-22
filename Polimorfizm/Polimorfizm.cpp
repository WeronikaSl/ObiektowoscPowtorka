#include <iostream>

class Ksztalt
{
public:
    virtual void rysuj() = 0;
};

class Kolo : public Ksztalt
{
public:
    void rysuj() override
    {
        std::cout << "Kolo" << std::endl;
    }
};
class Kwadrat : public Ksztalt
{
public:
    void rysuj() override
    {
        std::cout << "Kwadrat" << std::endl;
    }
};
class Trojkat : public Ksztalt
{
public:
    void rysuj() override
    {
        std::cout << "Trojkat" << std::endl;

    }
};

int main()
{
    Kolo k;
    Kwadrat kw;
    Ksztalt* wsk = &k;
    wsk->rysuj();
    wsk = &kw;
    wsk->rysuj();

    delete wsk;
}
