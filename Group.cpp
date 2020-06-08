#include "Group.h"

Group::Group() : group("Null")
{
}

Group::Group(std::string _group) : group(_group)
{
}

std::string Group::getGroupe()
{
	return group;
}

void Group::display()
{
	std::cout << "Group name: " << group << std::endl;
}


