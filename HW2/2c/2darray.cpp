#include <iomanip>
#include <iostream>

void getData(int numArray[][4]);
void displayArray(int numArray[][4]);
int main() {

    int numArray[3][4];
    getData(numArray);
    displayArray(numArray);

    return 0;
}
void getData(int numArray[][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Enter a number. " << '\n';
            std::cin >> numArray[i][j];
        }
    }
}
void displayArray(int numArray[][4]) {
    std::cout << "here is the data in the 2d array" << '\n';
    for (int i = 0; i < 3; i++) {
        std::cout << '\n';
        for (int j = 0; j < 4; j++) {
            std::cout << std::setw(4) << numArray[i][j] << " ";
        }
    }
    std::cout << '\n';
}
