#pragma once
#include "Header.h"
//"���� ��������� ������
class Group
{
	std::string group;

public:
	
	Group(); //��������� �����������
	Group(std::string group);//������������������ �����������
	std::string getGroupe(); //������ -�������, ������������ ���� ������ "������"
	void display();//����������� ������

};

