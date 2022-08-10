#pragma once
#include <string>
#include <vector>


class Student
{
private:
	std::string _name = {};
	std::string _surname = {};
	std::vector<int> _grades = {};
	double _average = 0.0;
public:
	void setName(std::string name);
	void setSurname(std::string surname);
	void setGrades(std::vector<int> grades);
	double countAverage();



};