#pragma once
#include "Header.h"
//"Тело дочернего класса
class Group
{
	std::string group;

public:
	
	Group(); //Дефолтный конструктор
	Group(std::string group);//Параметризированый конструктор
	std::string getGroupe(); //геттер -функция, возвращающая поле данных "Группа"
	void display();//отображение данных

};

