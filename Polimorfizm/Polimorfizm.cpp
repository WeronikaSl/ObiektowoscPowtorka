#include <iostream>

class Ksztalt
{
public:
    virtual void rysuj() = 0;
    virtual ~Ksztalt() = default;
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
    std::shared_ptr<Ksztalt> wsk = std::make_shared<Kolo>();
    wsk->rysuj();
    wsk = std::make_shared<Kwadrat>();
    wsk->rysuj();

}
