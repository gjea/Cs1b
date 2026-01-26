#include <fstream>
#include <iostream>
#include <string>

int main() {
    const int students = 5;
    const int classes = 3;
    std::string studentGrades[students][classes];
    std::ifstream inFile;
    inFile.open("grades.txt");
    for (int i = 0; i < 15; i += 3) {
        inFile >> studentGrades[i / 3][i];
        inFile >> studentGrades[i / 3][i + 1];
        inFile >> studentGrades[i / 3][i + 2];
    }
    for (int i = 0; i < students; i++) {
        std::cout << '\n';
        for (int j = 0; j < classes; j++) {
            std::cout << studentGrades[i][j];
        }
    }
    return 0;
}
