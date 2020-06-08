#pragma once
#include "Header.h"
#include "Group.h"

class Professor:public Group
{
	std::string name;
	std::string post;
	std::string department;
public:
	Professor();
	Professor(std::string name, std::string post, std::string department,std::string group);
	void ShowValues();

};

