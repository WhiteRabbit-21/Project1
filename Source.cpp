#include "Header.h"
#include "Professor.h"
#include "Group.h"

int main() {

    //Создание массива
    Professor Arr[3];

    //Инициализиация массива
    Arr[0] = Professor("Sklyarenko", "Head of Department", "Math & IT", "231");
    Arr[1] = Professor("Kurguzenkova", "Dean", "Math & IT", "111");
    Arr[2] = Professor("Prigara", "Senior Lecturer", "Cyber Security", "322");

    // Отображение всех объектов в массиве
    for (int i = 0; i < 3; i++) {
        Arr[i].ShowValues();
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Запрос на выборку по кафедре, где кафедра Math & IT может меняться на любую другю 
    std::cout << "Select obj`s where department == Math & IT" << std::endl;

    for (int i = 0; i < 3; i++) {
        if (Arr[i].getDepart() == "Math & IT") {
            Arr[i].ShowValues();
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;

    // Запрос на выборку по кафедре, где кафедра = Math & IT и группа = 111(имя_группы)
    std::cout << "Select obj`s where department == Math & IT && group == 111" << std::endl;

    for (int i = 0; i < 3; i++) {
        if ((Arr[i].getDepart() == "Math & IT") && (Arr[i].getGroupe() == "111")) {
            Arr[i].ShowValues();
            std::cout << std::endl;
        }
    }

}