#include <iostream>

class Patient;

class Doctor
{
private:
    Patient* _p;
public:
    void setPatient(Patient* p) 
    {
        _p = p;
    }
    void writePerscription()
    {
        std::cout << "Perscriptiion written" << std::endl;
    }
};

class Patient
{
private:
    Doctor* _d;
public:
    Patient(Doctor* d) : _d(d)
    {}
    void askForPerscription()
    {
        std::cout << "Give me perscription" << std::endl;
        _d->writePerscription();
    }
};

class Cat;

class Dog
{
private:
    Cat* _c;
    int _dogSnacks = 5;

public:
    void setCat(Cat* c)
    {
        _c = c;
    }
    void voice()
    {
        std::cout << "Hau!" << std::endl;
    }
    int giveSnacksToCat()
    {
        return _dogSnacks;
    }
};

class Cat
{
private:
    Dog* _d;
    int _catSnacks = 6;
public:
    Cat (Dog* d) : _d(d)
    {}
    void voice()
    {
        std::cout << "Miau!" << std::endl;
        _d->voice();
    }
    int howManySnacks()
    {
        return _d->giveSnacksToCat() + _catSnacks;
    }

};



int main()
{
    //Doctor d1;
    //Patient p1(&d1);
    //d1.setPatient(&p1);
    //p1.askForPerscription();

    //Dog d1;
    //Cat c1(&d1);
    //d1.setCat(&c1);

    //c1.voice();
    //std::cout << "Cat has " << c1.howManySnacks() << " snacks :D" << std::endl;
   


}

