// Attached: HW 4(a)
// File: HW_4a.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Handle Date
//
// Description:
// Takes in date, validates, and displays the day after today
#include <iostream>

// struct for date
struct Date {
    int month;
    int day;
    int year;
};

// function prototypes
void getDate(Date &today);
bool isDateValid(Date &today);
void addOneDay(Date &today);
void displayTomorrow(Date &today);

int main() {

    // make date object
    Date today;

    // fill object with data
    getDate(today);
    // validify date
    isDateValid(today);
    // display everything
    std::cout << "Day: " << today.day << '\n';
    std::cout << "Month: " << today.month << '\n';
    std::cout << "Year: " << today.year << '\n';
    displayTomorrow(today);

    return 0;
} // end of main

// function getDate gets the date from input (breaks if you use slashes)
//
// Input: today object
//
// Output: none
void getDate(Date &today) {
    // assign values to object
    std::cout << "Enter today's date in mm/dd/yy format" << '\n';
    std::cin >> today.month;
    std::cin >> today.day;
    std::cin >> today.year;
} // end of getDate

// function isDateValid checks the validity of the inputted date
//
//  Input: date object
//
//  Output: true after making the date valid
bool isDateValid(Date &today) {
    // verify month
    while (today.month < 1 || today.month > 12) {
        std::cout << "Invalid month" << '\n';
        std::cin >> today.month;
    }
    // verify day
    while (today.day < 1 || today.day > 30) {
        std::cout << "Invalid day" << '\n';
        std::cin >> today.day;
    }
    // verify year
    while (today.year <= 2019) {
        std::cout << "year cant be before 2020" << '\n';
        std::cin >> today.year;
    }

    return true;
} // end of isDateValid

// function addOneDay changes the date to the next day, and updates month/year
// accordingly
//
// Input: date object today
//
// Output: none
void addOneDay(Date &today) {
    // add 1 to day
    today.day++;
    // roll over month if month is over
    if (today.day == 31) {
        today.day = 1;
        today.month++;
        // roll over year if year is over
        if (today.month == 13) {
            today.year++;
            today.month = 1;
        }
    }
} // end of addOneDay

// function displayTomorrow prints out the day after today
//
// Input: date object today
//
// Output: none
void displayTomorrow(Date &today) {
    addOneDay(today);
    std::cout << "Tomorrow will be " << today.month << "/" << today.day << "/"
              << today.year << '\n';
} // end of displayTomorrow

// Output:

// Enter today's date in mm/dd/yy format
// 8 13 2083
// Day: 13
// Month: 8
// Year: 2083
// Tomorrow will be 8/14/2083
//
//
//
// Enter today's date in mm/dd/yy format
// 9 30 12
// year cant be before 2020
// 2020
// Day: 30
// Month: 9
// Year: 2020
// Tomorrow will be 10/1/2020
