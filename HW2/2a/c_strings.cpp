// Attached: HW 2(a)
// File: HW_2a.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Concatenate c strings
//
// Description:
// The program takes a first name and an inputted last name, and concatenates
// the two cstrings together and then prints the full name to the console
//

#include <cstring>
#include <iostream>

// function prototypes
void displayInfo(char fullName[], int age);

int main() {
    // variable init
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
    displayInfo(fullName, age);

    return 0;
}

// function displayInfo displays all relevant values to the console
// Inputs:fullName, and age
void displayInfo(char fullName[], int age) {
    std::cout << "Hello " << fullName << ". " << '\n';
    std::cout << "You are " << age << " years old. " << '\n';
}
