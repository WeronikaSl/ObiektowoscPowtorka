#include <iostream>

int main()
{
    int a = 5;
    int* ptr = &a; //pobranie adresu zmiennej i przypisanie do ptr
    std::shared_ptr<int> ptr2; //tu chcę przypisać adres zmiennej a, "= &a;" nie działa

}