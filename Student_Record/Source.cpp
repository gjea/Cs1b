#include "prototypes.h"
#include <iostream>
#include <string>

int main() {
    int ID;
    std::string name;
    float GPA;
    getRecord(ID, name, GPA);
    displayRecord(ID, name, GPA);
    return 0;
}

void getRecord(int &ID, std::string &name, float &GPA) {
    std::cout << "Enter a student Record: " << '\n';
    std::cout << "ID: " << '\n';
    std::cin >> ID;
    std::cout << "NAME: " << '\n';
    std::cin >> name;
    std::cout << "GPA: " << '\n';
    std::cin >> GPA;
}

void displayRecord(const int ID, const std::string name, const float GPA) {
    std::cout << "STUDENT RECORD" << "\n\n";
    std::cout << "ID: " << ID << '\n';
    std::cout << "NAME: " << name << '\n';
    std::cout << "GPA: " << GPA << '\n';
}
