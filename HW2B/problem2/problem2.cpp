// Attached: HW 2B(2)
// File: HW_2B2.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Merge Arrays
//
// Description:
// Program takes two arrays and merges them together
//
#include <iostream>

int main() {

    int arr1[5] = {};
    int arr2[5] = {};
    int arr3[10] = {};
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 10; i++) {
        arr2[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 5; i++) {
        arr3[i * 2] = arr1[i];
        arr3[(i * 2) + 1] = arr2[i];
    }
    std::cout << "array 1: " << '\n';
    for (int i = 0; i < 5; i++) {
        std::cout << arr1[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "array 2: " << '\n';
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "Merged Array: " << '\n';
    for (int i = 0; i < 10; i++) {
        std::cout << arr3[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
