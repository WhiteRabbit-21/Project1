#pragma once
#include "Header.h"
#include "Group.h"
// Тело родительского класса 
class Professor:public Group
{
	std::string name;
	std::string post;
	std::string department;
public:
	Professor(); // Дефолтный конструктор
	Professor(std::string name, std::string post, std::string department,std::string group); //Конструктор с параметрами
	void ShowValues(); //Отображения данных объекта
	std::string getDepart(); //геттер -функция, возвращающая поле данных "Кафедра"
	


};

