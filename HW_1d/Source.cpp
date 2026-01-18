// Attached: HW 1(a-e)
// File: HW_1d.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: caclulate volume
//
// Description:
// Program validates three sides of a rectangle, and calculates the volume if
// the sides are of valid length.
//
#include <iostream>
// function prototypes
void getDimensions(float &width, float &length, float &depth);
bool areValid(float &width, float &length, float &depth);
float calcVolume(float &width, float &length, float &depth);
void displayVolume(float &width, float &length, float &depth, float volume);

int main() {
    // declare variables
    float width;
    float length;
    float depth;
    // function to get dimensions of the rectangle
    getDimensions(width, length, depth);
    // function to check validity of the sides
    if (areValid(width, length, depth)) {
        // function to display the total volume and sides    // function to
        // calculate volume
        displayVolume(width, length, depth, calcVolume(width, length, depth));
    } else {
        std::cout << "Invalid input, try again." << '\n';
    }

    return 0;
} // end of main

// getDimensions
// fucntion accepts 3 values as input for the three dimensions of rectangle
//
// input: values for width, length,, and depth
// output: width, length, depth
void getDimensions(float &width, float &length, float &depth) {
    std::cout << "Enter width: " << '\n';
    std::cin >> width;
    std::cout << "Enter length: " << '\n';
    std::cin >> length;
    std::cout << "Enter depth: " << '\n';
    std::cin >> depth;
}

// areValid
// function checks that all sides are valid
//
// Input: width, length, and depth
//
// output: true or false depending on validity of sides
bool areValid(float &width, float &length, float &depth) {
    bool widthvalid = false;
    bool lengthvalid = false;
    bool depthvalid = false;
    if (width > 5 && width < 20) {
        widthvalid = true;
    }
    if (length > 5 && length < 100) {
        lengthvalid = true;
    }
    if (depth > 1 && depth < 12) {
        depthvalid = true;
    }
    if (widthvalid && lengthvalid && depthvalid) {
        return true;
    } else {
        return false;
    }
}

// calcVolume
// fucntion calculates the total volume based on width length and depth
// returns volume to main
//
// input: width, length, and depth
// output: volume
float calcVolume(float &width, float &length, float &depth) {
    return width * length * depth;
}

// displayVolume
// function displays all relevant values including volume, width, length, and
// depth of the rectangle
//
// input: width, length, depth, and volume
//
// output: displays all values to console
void displayVolume(float &width, float &length, float &depth, float volume) {
    std::cout << "The volume is " << volume << '\n';
    std::cout << "DIMENSIONS: " << '\n';
    std::cout << "width: " << width << '\n';
    std::cout << "length: " << length << '\n';
    std::cout << "depth: " << depth << '\n';
}
