// Attached: HW 1(a-e)
// File: HW_1b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Display Average Temperature
//
// Description:
// After inputting three Temperatures, program finds the average and displays it
//
//
#include <iostream>
// function prototypes
void getTemps(float &temp1, float &temp2, float &temp3);
float calcAvg(float temp1, float temp2, float temp3);
void displayAvg(float temp1, float temp2, float temp3, float average);

// main

int main() {
    // initialize variables
    float temp1 = 0;
    float temp2 = 0;
    float temp3 = 0;
    float average = 0;
    // function to retrieve all 3 Temperatures
    getTemps(temp1, temp2, temp3);
    // function to calculate the average of the three temperatures
    average = calcAvg(temp1, temp2, temp3);
    // function to display the average and the three temperatures
    displayAvg(temp1, temp2, temp3, average);
    return 0;
} // end of main

// getTemps
// function accepts input 3 times for the three temperatures
// Input: temperature variables and user input
//
// Output: temperature variables
void getTemps(float &temp1, float &temp2, float &temp3) {
    std::cout << "Enter temp 1: " << '\n';
    std::cin >> temp1;
    std::cout << "Enter temp 2: " << '\n';
    std::cin >> temp2;
    std::cout << "Enter temp 3: " << '\n';
    std::cin >> temp3;
} // end of getTemps

// calcAvg
// function calculates the average of the three temperatures
// returns value to main
// Input: 3 temp variables
//
// Output: average of temp variables
float calcAvg(float temp1, float temp2, float temp3) {
    return (temp1 + temp2 + temp3) / 3;
} // end of calcAvg

// displayAvg
// function displays all important values such as average, and the three
// temperatures
//
// input: 3 temp variables and average
//
// Output: displays values to console
void displayAvg(float temp1, float temp2, float temp3, float average) {
    std::cout << "City #1 temp" << temp1 << '\n';
    std::cout << "City #2 temp" << temp2 << '\n';
    std::cout << "City #3 temp" << temp3 << '\n';
    std::cout << "Average temp: " << average << '\n';
} // end of displayAvg
// Output:
//
// Enter temp 1:
// 98
// Enter temp 2:
// 45
// Enter temp 3:
// 10000
// City #1 temp98
// City #2 temp45
// City #3 temp10000
// Average temp: 3381
