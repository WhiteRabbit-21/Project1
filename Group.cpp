#include "Group.h"

Group::Group() : group("Null")
{
}

Group::Group(std::string _group) : group(_group)
{
}

void Group::display()
{
	std::cout << "Group name: " << group << std::endl;
}


