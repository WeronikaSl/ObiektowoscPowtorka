#include <iostream>

class Cat
{
private:
    static const int _paws = 4;
    std::string _name = {};

public:

    Cat(std::string name) : _name(name)
    {}
    Cat(const Cat& old)
    {
        this->_name = old._name;
    }
    std::string getName() const
    {
        return _name;
    }

};



int main()
{
    Cat c1("Sernik");
    Cat c2 = c1;
    std::cout << c2.getName() << std::endl;

}
