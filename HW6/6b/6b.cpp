// Attached: HW 6(b)
// File: HW_6b.pdf
//
//
// Programmer: Gage Alvarez
// Class: CS 1B
// Instructor: Med Mogasemi
//
//
// Program: write from file
//
// Description:
// Program reads from the file and then writes to another file
#include <fstream>
#include <iostream>
#include <string>

// main
int main() {
    // make text string
    std::string inputText = "";

    // create file objects
    std::ifstream readfile("data.txt");
    std::ofstream writefile("output.txt");

    if (readfile.fail()) {
        std::cout << "failed" << '\n';
    }
    // write read contents to other file
    while (std::getline(readfile, inputText)) {
        writefile << inputText << '\n';
    }

    readfile.close();
    writefile.close();

    return 0;
}
