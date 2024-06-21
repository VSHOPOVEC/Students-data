#pragma once
#include "INCLUDE_H.h"
class Student
{
public:
	void set_name(std::string name) ;
	void set_gender(std::string gender);
	void set_surname(std::string surname);
	void set_DateOfBirth(int year, int month, int day);
	Student();
	Student(int year, int month, int day, std::string name, std::string surname, std::string gender);
private:
	std::string name; 
	std::string surname;
	int age;
	int month; 
	int day;
	std::string gender; 
};

