#include <iostream>
#include "Student.hpp"


int main()
{
    std::shared_ptr<Student1> dionizy = std::make_shared<Student1>(1988);
    std::shared_ptr<Promotor> promotor = std::make_shared<Promotor>(dionizy);
    dionizy->setPromotor(promotor);


    std::cout << dionizy->getBirthYear() << std::endl;
    dionizy->sendEmailToPromotor();
    promotor->sendEmailToStudent();
    std::cout << dionizy->getBirthYear() << std::endl;
}