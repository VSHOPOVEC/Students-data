#include "Students.h"

void Students::SetNameGroup(std::string NameOfGroup)
{
	this->NameOfGroup = NameOfGroup;
}

void Students::SetSizeOfGroup(int SizeOfGroup)
{
	this-> SizeOfGroup = SizeOfGroup;
}

void Students::ShowGroup()
{

}

Students::Students(int SizeOfGroup, std::string NameOfGroup)
{
	SetSizeOfGroup(SizeOfGroup);
	SetNameGroup(NameOfGroup);
	Student* ArrayOfStudent = new Student[SizeOfGroup];
	for (int i = 0; i < SizeOfGroup; ++i) {
		if (i > 0) {

			std::cout << "-------------------------------------------------------------------------------\n";
			std::cout << "New student!\n";
		}
		int year, month, day;
		std::string gender, name, surname;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's name: ";
		std::cin >> name;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's surname: ";
		std::cin >> surname;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's gender: ";
		std::cin >> gender;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Stubent's birthday\n";
		std::cout << "Day: ";
		std::cin >> day;
		std::cout << "Month: ";
		std::cin >> month;
		std::cout << "Year: ";
		std::cin >> year;
		ArrayOfStudent[i] = Student(year, month, day, name, surname, gender);
	}
}

Students::Students()
{
	int SizeOfGroup;
	std::string NameOfGroup; 

	std::cout << "Enter group's name: ";
	std::cin >> NameOfGroup;
	std::cout << "Enter group's size: ";
	std::cin >> SizeOfGroup;

	SetSizeOfGroup(SizeOfGroup);
	SetNameGroup(NameOfGroup);
	Student* ArrayOfStudent = new Student[SizeOfGroup];
	for (int i = 0; i < SizeOfGroup; ++i) {
		if (i > 0) {

			std::cout << "-------------------------------------------------------------------------------\n";
			std::cout << "New student!\n";
		}
		int year, month, day;
		std::string gender, name, surname;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's name: ";
		std::cin >> name;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's surname: ";
		std::cin >> surname;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Student's gender: ";
		std::cin >> gender;
		std::cout << "-------------------------------------------------------------------------------\n";
		std::cout << "Stubent's birthday\n";
		std::cout << "Day: ";
		std::cin >> day;
		std::cout << "Month: ";
		std::cin >> month;
		std::cout << "Year: ";
		std::cin >> year;
		ArrayOfStudent[i] = Student(year, month, day, name, surname, gender);
	}
}

