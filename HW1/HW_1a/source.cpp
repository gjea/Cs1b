// Attached: HW 1(a-e)
// File: HW_1a.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Calculate Total Pay
//
// Description:
// Program Calculates the total pay from the monthly sales amount and the
// commission based on the sales amount.
//
//
#include <iostream>
#include <string>
// Function Prototypes
float getSalesAmount();
float calcCommission(float);
float calcPay(float);
void displayPay(float, float, float);
//
// main
//
int main() {
    std::string loop;
    do {
        // Declaring Variables
        loop = "";
        float salesAmount;
        float commission;
        float totalPay;

        // Function to get the sales amount
        salesAmount = getSalesAmount();

        // function used to calculate the commission based on the sales amount
        commission = calcCommission(salesAmount);
        // function used to determine the total pay based on sales amount and
        // commission
        totalPay = calcPay(commission);
        // function used to display the total pay
        displayPay(salesAmount, commission, totalPay);

        std::cout << "loop? (y/*)" << '\n';
        std::cin >> loop;

    } while (loop[0] == 'y');
    return 0;
} // end of main

// getSalesAmount
// This fucntion prompts the user to enter the monthly sales amount
// returns salesAmount to main
//
// Input: monthly sales amount inputted by user
// Output: salesAmount returned to main

float getSalesAmount() {
    float salesAmount = 0;
    std::cout << "Enter sales amount " << '\n';
    std::cin >> salesAmount;
    return salesAmount;
} // end of getSalesAmount

// calcCommission
// This function calculates the commission based on the sales amount
// returns the total commission amount to main
//
// Input: Sales amount
// Output: commission

float calcCommission(float salesAmount) {
    float commissionRate = 0;
    if (salesAmount > 50000) {
        commissionRate = 0.2;
    } else if (salesAmount > 25000) {
        commissionRate = 0.15;
    } else {
        commissionRate = 0;
    }
    return salesAmount * commissionRate;
} // end of calcCommission

// calcPay
// This function calculates the total pay based on monthly pay and commission
// returns totalPay to main
//
// Input: monthly pay and commission
// Output: total pay

float calcPay(float commission) {
    const int PAY = 2500;
    return PAY + commission;
} // end of calcPay

// displayPay
// function displays all important values
//
// Input: salesAmount, Commission, totalPay
// Output: prints all values to console

void displayPay(float salesAmount, float commission, float totalPay) {
    std::cout << "Monthly Sales: " << salesAmount << '\n';
    std::cout << "Commission: " << commission << '\n';
    std::cout << "Base Pay: " << totalPay - commission << '\n';
    std::cout << "Total Pay: " << totalPay << '\n';
} // end of displayPay

// Output:
// Enter sales amount
// 9000
// Monthly Sales: 9000
// Commission: 0
// Base Pay: 2500
// Total Pay: 2500
// loop? (y/*)
// y
// Enter sales amount
// 98734
// Monthly Sales: 98734
// Commission: 19746.8
// Base Pay: 2500
// Total Pay: 22246.8
// loop? (y/*)
// n
