#include <iostream>
#include <vector>
const int SCORES = 5;
const int STUDENTS = 3;
void getTestScores(float studentScores[][SCORES]);
// float getTotalTestScores(float studentScores[][SCORES]);
float getClassAverage(float studentScores[][SCORES]);
// float getStudentTotalScore(float studentScores[][SCORES], int student);
float getStudentAverage(float studentScores[][SCORES], int student);
// float getLowestStudentTest(float studentScores[][SCORES], int student);
// float getHighestStudentTest(float studentScores[][SCORES], int student);
void eachStudentAverage(float studentScores[][SCORES]);
void findStudentHighests(float studentScores[][SCORES]);
void findStudentLowests(float studentScores[][SCORES]);
int main() {
    float studentScores[STUDENTS][SCORES]{};
    float average{};
    getTestScores(studentScores);
    average = getClassAverage(studentScores);
    std::cout << "The class average is " << average << '\n';

    std::cout << "The average test score for student #1 is "
              << getStudentAverage(studentScores, 0) << '\n';

    eachStudentAverage(studentScores);

    findStudentHighests(studentScores);
    findStudentLowests(studentScores);

    /*for (int i = 0; i < STUDENTS; i++) {
        std::cout << "The average test score for student #" << i+1 << " is " <<
    getStudentAverage(studentScores, i) << '\n'; std::cout << "The lowest test
    score for student #" << i+1 << " is " << getLowestStudentTest(studentScores,
    i) << '\n'; std::cout << "The highest test score for student #" << i+1 << "
    is " << getHighestStudentTest(studentScores, i) << '\n';
    }*/

    return 0;
}
void getTestScores(float studentScores[][SCORES]) {
    std::cout << "please enter 5 test sores";
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SCORES; j++) {
            std::cout << "Student #" << i + 1 << " test #" << j + 1 << ": ";
            std::cin >> studentScores[i][j];
        }
    }
}

float getTotalTestScores(float studentScores[][SCORES]) {
    float total{};
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SCORES; j++) {
            total += studentScores[i][j];
        }
    }
    return total;
}
float getClassAverage(float studentScores[][SCORES]) {
    return getTotalTestScores(studentScores) / (SCORES * STUDENTS);
}
float getStudentTotalScore(float studentScores[][SCORES], int student) {
    float total{};

    for (int i = 0; i < SCORES; i++) {
        total += studentScores[student][i];
    }
    return total;
}
float getStudentAverage(float studentScores[][SCORES], int student) {
    return getStudentTotalScore(studentScores, student) / SCORES;
}
// float getLowestStudentTest(float studentScores[][SCORES], int student) {
//     float lowest = studentScores[student][0];
//     for (int i = 0; i < SCORES; i++) {
//         if (studentScores[student][i] < lowest) {
//             lowest = studentScores[student][i];
//         }
//     }
//     return lowest;
// }
// float getHighestStudentTest(float studentScores[][SCORES], int student) {
//     int highest = studentScores[student][0];
//     for (int i = 0; i < SCORES; i++) {
//         if (studentScores[student][i] > highest) {
//             highest = studentScores[student][i];
//         }
//     }
//     return highest;
// }

void eachStudentAverage(float studentScores[][SCORES]) {
    float average{};
    float total{};

    for (int i = 0; i < STUDENTS; i++) {
        total = 0.0;
        average = 0.0;
        for (int j = 0; j < SCORES; j++) {
            total += studentScores[STUDENTS][SCORES];
        }
        average = total / SCORES;
        std::cout << "The average for studdent # " << i + 1 << " is " << average
                  << '\n';
    }
}

void findStudentHighests(float studentScores[][SCORES]) {
    float highest{};

    for (int i = 0; i < STUDENTS; i++) {
        highest = studentScores[i][0];
        for (int j = 0; j < SCORES; j++) {
            if (studentScores[i][j] > highest) {
                highest = studentScores[i][j];
            }
        }
        std::cout << "highest score for student #" << i + 1 << " is " << highest
                  << '\n';
    }
}
void findStudentLowests(float studentScores[][SCORES]) {
    float lowest{};

    for (int i = 0; i < STUDENTS; i++) {
        lowest = studentScores[i][0];
        for (int j = 0; j < SCORES; j++) {
            if (studentScores[i][j] < lowest) {
                lowest = studentScores[i][j];
            }
        }
        std::cout << "lowest score for student #" << i + 1 << " is " << lowest
                  << '\n';
    }
}
