// Attached: HW 3(b)
// File: HW_3b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: print even numbers
//
// Description:
// Program prints every even number

#include <iostream>

void displayEven(int num);
int main() {

    std::cout << "Here are all even numbers from 1 to 20" << '\n';
    displayEven(20);
    std::cout << '\n';
    return 0;
}

// function displayEven displays every even number from 1 to 20
// Input: num, the max number that it counts to
// Output: NA
void displayEven(int num) {
    if (num == 0) {
        return;
    }
    displayEven(num - 2);
    std::cout << num << ' ';
}

// Output:
// Here are all even numbers from 1 to 20
//  2 4 6 8 10 12 14 16 18 20
