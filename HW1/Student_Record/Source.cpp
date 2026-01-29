// Attached: HW 1(a-e)
// File: HW_1a.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Create student Record
//
// Description:
// Program displays student record inputted by user
//
//
// function prototypes
// void getRecord(int &ID, std::string &name, float &GPA);
// void displayRecord(const int ID, const std::string name, const float GPA);
#include "prototypes.h"

#include <iostream>
#include <string>

int main() {
    // Declaring variables
    int ID;
    std::string name;
    float GPA;
    // function used to get the record for the student
    getRecord(ID, name, GPA);
    // function used to display the student record
    displayRecord(ID, name, GPA);
    return 0;
} // end of main

// getRecord
// This fucntion sets variabels from user input
//
// input: id,name, GPA
//
// output: updated id, name , GPA
void getRecord(int &ID, std::string &name, float &GPA) {
    std::cout << "Enter a student Record: " << '\n';
    std::cout << "ID: " << '\n';
    std::cin >> ID;
    std::cout << "NAME: " << '\n';
    std::cin >> name;
    std::cout << "GPA: " << '\n';
    std::cin >> GPA;
} // end of getRecord

// displayRecord
// function displays student record
//
// input: id, name, gpa
//
//  output: displays variables to console
//

void displayRecord(const int ID, const std::string name, const float GPA) {
    std::cout << "STUDENT RECORD" << "\n\n";
    std::cout << "ID: " << ID << '\n';
    std::cout << "NAME: " << name << '\n';
    std::cout << "GPA: " << GPA << '\n';
} // end of displayRecord

// Output:
//
// Enter a student Record:
// ID:
// 65
// NAME:
// studentguy
// GPA:
// 900
// STUDENT RECORD
//
// ID: 65
// NAME: studentguy
// GPA: 900
