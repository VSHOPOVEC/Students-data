#pragma once
#include "INCLUDE_H.h"
#include "Student.h"
class Students
{
public:
	void SetNameGroup(std::string NameOfGroup);
	void SetSizeOfGroup(int SizeOfGroup);
	Students(int SizeOfGroup, std::string NameOfGroup);
	Students();
	void ShowGroup();

private:
	std::string NameOfGroup; 
	int SizeOfGroup; 
};


