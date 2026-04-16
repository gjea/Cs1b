// Attached: HW 7(b)
// File: HW_7b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: Cat Class
//
// Description:
// keeps track of three cats, user inputs weight and color and that info is
// displayed at the end of the program.

#include "cat.h"

#include <iostream>
#include <string>

int main() {

    Cat Fluffy;
    Cat Tom;
    Cat Kitty;

    int weight;
    std::string color{};

    std::cout << "Enter Fluffy's weight: " << '\n';
    std::cin >> weight;
    std::cout << "Enter Fluffy's color" << '\n';
    std::cin >> color;
    Fluffy.setWeight(weight);
    Fluffy.setColor(color);

    std::cout << "Enter Tom's weight" << '\n';
    std::cin >> weight;
    std::cout << "Enter Tom's color" << '\n';
    std::cin >> color;
    Tom.setWeight(weight);
    Tom.setColor(color);

    std::cout << "Enter Kitty's weight" << '\n';
    std::cin >> weight;
    std::cout << "Enter Kitty's color" << '\n';
    std::cin >> color;
    Kitty.setWeight(weight);
    Kitty.setColor(color);

    Fluffy.displayInfo();
    Tom.displayInfo();
    Kitty.displayInfo();

    std::cout << "Fluffy: " << '\n';
    Fluffy.meow();
    std::cout << "Tom: " << '\n';
    Tom.meow();
    std::cout << "Kitty: " << '\n';
    Kitty.meow();

    return 0;
}
