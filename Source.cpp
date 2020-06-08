#include "Header.h"
#include "Professor.h"
#include "Group.h"

int main() {

    Professor Arr[3];        //Создавать массив лучше
    Arr[0] = Professor("Sklyarenko", "Head of Department", "Math & IT", "");
    Arr[1] = Professor("Kurguzenkova", "Dean", "Math & IT", "111");
    Arr[2] = Professor("Prigara", "Senior Lecturer", "Cyber Security", "322");

    for (int i = 0; i < 3; i++) {
        Arr[i].ShowValues();
        std::cout << std::endl;
    }
    //smth
}