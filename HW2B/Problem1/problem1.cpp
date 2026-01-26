// Attached: HW 2B(1)
// File: HW_2B1.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: random numbers in array
//
// Description:
// populate array with random numbers, then find the greatest and smallest
// elements of the array

#include <cstdlib>
#include <iostream>

int findSmallestElement(const int numbers[]);
int findGreatestElement(const int numbers[]);

int main() {

    int numbers[10]{};
    int smallest = 0;
    int greatest = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    std::cout << "List of elements:" << '\n';
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';
    smallest = findSmallestElement(numbers);
    std::cout << "Smallest: " << smallest << '\n';
    greatest = findGreatestElement(numbers);
    std::cout << "Greatest: " << greatest << '\n';
    return 0;
}

// function findSmallestElement finds the smallest element in the array of
// numbers Input: array of numbers: numbers Output: smallest number in array:
// returned to main
int findSmallestElement(const int numbers[]) {
    int smallest = numbers[0];
    for (int i = 0; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}

// function findGreatestElement finds the greatest element in the array of
// numbers Input: array of numbers: numbers Output: greatest number in array:
// returned to main
int findGreatestElement(const int numbers[]) {
    int greatest = numbers[0];
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }
    return greatest;
}
