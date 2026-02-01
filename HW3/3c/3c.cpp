// Attached: HW 3(c)
// File: HW_3c.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Display odd numbers
//
// Description:
// Program displays every odd number between 20 and 0
#include <iostream>

void showOdd(int num);
int main() {

    std::cout << "Here is every odd number between 20 and 0" << '\n';
    showOdd(1);
    std::cout << '\n';
    return 0;
}

// function showOdd displays every odd number between 20 and 0
// Input: num, the number it counts down from
// Output: none
void showOdd(int num) {
    if (num == 21) {
        return;
    }
    showOdd(num + 2);
    std::cout << num << ' ';
}

// Output:
// Here is every odd number between 20 and 0
// 19 17 15 13 11 9 7 5 3 1
