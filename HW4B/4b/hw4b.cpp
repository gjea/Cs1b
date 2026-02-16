// Attached: HW 4(b)
// File: HW_4b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: car array
//
// Description: Make car array and fill with as many cars as you want
#include <iostream>

// car struct
struct Car {
    std::string brand = "";
    int modelYear = 0;
    float price = 0;
};

// function prototypes
Car *createCarArray(int size);
Car *findMostExpensiveCar(Car *carArray, int size);

// main
int main() {

    int size;
    std::cout << "Enter number of cars" << '\n';
    std::cin >> size;
    Car *cars = createCarArray(size);
    Car *mostExpensive = findMostExpensiveCar(cars, size);
    std::cout << "Most expensive car: " << mostExpensive->brand
              << "\tModel Year " << mostExpensive->modelYear
              << "\tprice: " << mostExpensive->price << '\n';
    return 0;
} // end of main

// createCarArray function creates the car array and fills car values
// Input: array size
// Output: car Array pointer
Car *createCarArray(int size) {
    Car *carArray = new Car[size];
    for (int i = 0; i < size; i++) {
        std::cout << "brand: " << '\n';
        std::cin >> carArray[i].brand;
        std::cout << "modelYear: " << '\n';
        std::cin >> carArray[i].modelYear;
        std::cout << "price: " << '\n';
        std::cin >> carArray[i].price;
    }
    return carArray;
} // end of createCarArray

// findMostExpensiveCar function finds the most expensive car out of the array
// Input: car array, and array size
// Output: most expensive car pointer in the array
Car *findMostExpensiveCar(Car *carArray, int size) {
    Car *mostExpensive = &carArray[0];
    for (int i = 0; i < size; i++) {
        if (carArray[i].price > mostExpensive->price) {
            mostExpensive = &carArray[i];
        }
    }
    return mostExpensive;
} // end of findMostExpensiveCar

// Output
// Enter number of cars
// 2
// brand:
// cs
// modelYear:
// 282
// price:
// 1999
// brand:
// chris
// modelYear:
// 1002
// price:
// 49
// Most expensive car: cs  Model Year 282  price: 1999
