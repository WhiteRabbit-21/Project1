#include "Header.h"
#include "Professor.h"
#include "Group.h"

int main() {

    //�������� �������
    Professor Arr[3];

    //�������������� �������
    Arr[0] = Professor("Sklyarenko", "Head of Department", "Math & IT", "231");
    Arr[1] = Professor("Kurguzenkova", "Dean", "Math & IT", "111");
    Arr[2] = Professor("Prigara", "Senior Lecturer", "Cyber Security", "322");

    // ����������� ���� �������� � �������
    for (int i = 0; i < 3; i++) {
        Arr[i].ShowValues();
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // ������ �� ������� �� �������, ��� ������� Math & IT ����� �������� �� ����� ����� 
    std::cout << "Select obj`s where department == Math & IT" << std::endl;

    for (int i = 0; i < 3; i++) {
        if (Arr[i].getDepart() == "Math & IT") {
            Arr[i].ShowValues();
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;

    // ������ �� ������� �� �������, ��� ������� = Math & IT � ������ = 111(���_������)
    std::cout << "Select obj`s where department == Math & IT && group == 111" << std::endl;

    for (int i = 0; i < 3; i++) {
        if ((Arr[i].getDepart() == "Math & IT") && (Arr[i].getGroupe() == "111")) {
            Arr[i].ShowValues();
            std::cout << std::endl;
        }
    }

}