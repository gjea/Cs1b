#include <cstring>
#include <iostream>

void displayInfo(char firstName[], char lastName[], char fullName[], int age);
int main() {

    char firstName[10] = "name";
    char lastName[10] = "";
    char fullName[20] = "";
    int age = 0;
    std::cout << "How age areyou?" << '\n';
    std::cin >> age;
    std::cout << "What is your last name ? (must be 9 characters or less)"
              << '\n';
    std::cin >> lastName;
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    displayInfo(firstName, lastName, fullName, age);

    return 0;
}
void displayInfo(char firstName[], char lastName[], char fullName[], int age) {
    std::cout << "Hello " << fullName << ". " << '\n';
    std::cout << "You are " << age << " years old. " << '\n';
}
