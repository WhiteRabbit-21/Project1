#include "Professor.h"

Professor::Professor():name("Null"),post("Null"),department("Null"),Group(" ")
{
}

Professor::Professor(std::string _name, std::string _post, std::string _department, std::string _group):
	name(_name),post(_post),department(_department),Group(_group)
{
}

void Professor::ShowValues()
{
	std::cout << "Professor`s name: " << name << std::endl;
	std::cout << "Professor`s post: " << post << std::endl;
	std::cout << "Professor`s department: " << department << std::endl;
	Group::display();

}
