#include <iostream>
#include "Student.hpp"
#include <vector>



int main()
{
    Student s1;
    s1.setName("Weronika");
    std::vector<int> grades = { 1,3,3,4,5 };
    s1.setGrades(grades);
    std::cout << s1.countAverage() << std::endl;
}
