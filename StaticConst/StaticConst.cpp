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
    static int getPaws()
    {
        return _paws;
    }
    int ifModified(int a) const 
    {
        int b = 4;
        a = 7;
        b = 9;
        return a+b;
    }

};



int main()
{
    Cat c1("Sernik");
    Cat c2 = c1;
    std::cout << c2.getName() << std::endl;


    std::cout << c1.ifModified(5);

}
