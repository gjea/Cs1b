#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string text = "";

    std::ifstream file("data.txt");

    if (file.fail()) {
        std::cout << "file didnt work bozo" << '\n';
        return 0;
    }

    std::cout << "the numbers in the fiel are: " << '\n';
    while (std::getline(file, text)) {
        std::cout << text << '\n';
    }

    return 0;
}
