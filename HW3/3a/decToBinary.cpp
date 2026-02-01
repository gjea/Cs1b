// Attached: HW 3(a)
// File: HW_3a.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Convert decimal to binary
//
// Description: Program converts a decimal number to binary

#include <iostream>

void decToBinary(const int num);
int main() {

    int num = 0;
    std::cout << "Enter a non-negative integer value: " << '\n';
    std::cin >> num;
    while (num < 0) {
        std::cout << "Invalid input: enter number greater than 0" << '\n';
        std::cin >> num;
    }
    std::cout << "decimal " << num << " = ";
    decToBinary(num);
    std::cout << " binary" << '\n';
    return 0;
}

// function decToBinary converts a decimal number to binary
// Inputs: number to be converted
// Outputs: none
void decToBinary(const int num) {
    if (num == 0) {
        return;
    }
    const int half = num / 2;
    const int remainder = num % 2;
    decToBinary(half);
    std::cout << remainder << ' ';
}

// Output
// Enter a non-negative integer value:
// 5
// decimal 5 = 1 0 1  binary
