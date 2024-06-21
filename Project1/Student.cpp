#include "Student.h"

void Student::set_name(std::string name)
{
	this->name = name;
}

void Student::set_gender(std::string sex)
{
	this->gender = gender;
}

void Student::set_surname(std::string surname)
{
	this->surname = surname; 
}

void Student::set_DateOfBirth(int year, int month, int day)
{
	this->age = age;
	this->month = month;
	this->day = day;
}

Student::Student()
{
	set_DateOfBirth(0, 0, 0);
	set_gender("Nothing");
	set_name("Nothing");
}

Student::Student(int year, int month, int day, std::string name, std::string surname, std::string gender)
{
	set_gender(gender);
	set_DateOfBirth(year, month, day);
	set_name(name);
	set_surname(surname);
}
