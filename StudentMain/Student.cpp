#include "Student.hpp"
#include <numeric>

void Student::setName(std::string name)
{
	_name = name;
}

void Student::setSurname(std::string surname)
{
	_surname = surname;
}

void Student::setGrades(std::vector<int> grades)
{
	_grades = grades;
}

double Student::countAverage()
{
	return (std::accumulate(_grades.cbegin(), _grades.cend(), 0)/5.0);
}
