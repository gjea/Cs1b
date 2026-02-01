// Attached: HW 2(c)
// File: HW_2c.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Display 2d array
//
// Description:
// Program allows you to fill a 2d array with numbers, then displays the array.

#include <iomanip>
#include <iostream>

// function prototypes
void getData(int numArray[][4]);
void displayArray(int numArray[][4]);

int main() {

    int numArray[3][4];
    getData(numArray);
    displayArray(numArray);

    return 0;
} // end of main

// function getData fills the array with user inputted numbers
// Inputs: the array numArray, and user input for every slot in the array
void getData(int numArray[][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Enter a number. " << '\n';
            std::cin >> numArray[i][j];
        }
    }
} // end of getData

// function displayArray prints out the data in the 2d array to the console.
// Inputs: filled numArray with values
void displayArray(int numArray[][4]) {
    std::cout << "here is the data in the 2d array" << '\n';
    for (int i = 0; i < 3; i++) {
        std::cout << '\n';
        for (int j = 0; j < 4; j++) {
            std::cout << std::setw(4) << numArray[i][j] << " ";
        }
    }
    std::cout << '\n';
} // end of displayArray

// Output:
// Enter a number.
// 98
// Enter a number.
// 43
// Enter a number.
// 34
// Enter a number.
// 56
// Enter a number.
// 223
// Enter a number.
// 34
// Enter a number.
// 45
// Enter a number.
// 46
// Enter a number.
// 92
// Enter a number.
// 018
// Enter a number.
// 75
// Enter a number.
// 888
// here is the data in the 2d array
//
//   98   43   34   56
//  223   34   45   46
//   92   18   75  888
