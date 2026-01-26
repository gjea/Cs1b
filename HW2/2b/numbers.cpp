// Attached: HW 2(b)
// File: HW_2b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Find ID in array
//
// Description:
// The program searches an array for an inputted ID, and reports whether or not
// the inputted number is within the array.

#include <iostream>

int main() {

    int numbers[5] = {12345, 54321, 11223, 33211, 44411};

    int id = 0;
    std::cout << "Enter ID number: " << '\n';
    std::cin >> id;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == id) {
            std::cout << "id found at index " << i << '\n';
            return 0;
        }
    }
    std::cout << "id not found in list" << '\n';
    return 0;
}
