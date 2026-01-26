#include <iostream>
#include <fstream>
#include <iomanip>
const int g_STUDENTS = 5;
const int g_CLASSES = 3;

void loadGradesFromFileFromFile(char student_grades[][g_CLASSES]);
void displayGrades(char student_grades[][g_CLASSES]);
float calculateStudentGPA(char student_grades[][g_CLASSES], int& student);
void displayStudentGPA(char student_grades[][g_CLASSES]);
float calcuateGPABySubject(char student_grades[][g_CLASSES], int& subject);
void displayGPAPerClass(char student_grades[][g_CLASSES]);
int main(){

    char student_grades[g_STUDENTS][g_CLASSES]{};
    loadGradesFromFileFromFile(student_grades);
    displayGrades(student_grades);
    displayStudentGPA(student_grades);
    displayGPAPerClass(student_grades);
}

void loadGradesFromFileFromFile(char student_grades[][g_CLASSES]) {
    std::fstream inFile("grades.txt");
    if (inFile.fail()) {
        std::cout << "File failed to open" << '\n';
    }

    for (int i = 0; i < g_STUDENTS; i++) {
        for (int j = 0; j < g_CLASSES; j++) {
            inFile >> student_grades[i][j];
        }
    }
}
void displayGrades(char student_grades[][g_CLASSES]) {
    std::cout << "Display overall grades" << '\n';
    for(int i = 0; i < g_STUDENTS; i++) {
        std::cout << "Grades for student " << i+1 << '\t';
        for (int j = 0; j < g_CLASSES; j++) {
            std::cout << std::setw(3) << student_grades[i][j] << " ";
        }
        std::cout << '\n';
    }
}
float calculateStudentGPA(char student_grades[][g_CLASSES], int& student) {
    float total = 0.0;
    for (int i = 0; i < g_CLASSES; i++) {
        if (student_grades[student][i] == 'A') {
            total += 4.0;
        } else if (student_grades[student][i] == 'B') {
            total +=3.0;
        } else if (student_grades[student][i] == 'C') {
            total +=2.0;
        } else if (student_grades[student][i] == 'D') {
            total +=1.0;
        } else {
            total += 0.0;
        }
    }
    return total / g_CLASSES;
}
void displayStudentGPA( char student_grades[][g_CLASSES]) {
    std::cout << "student GPAs" << '\n';
    for(int i = 0; i < g_STUDENTS; i++) {
        const float GPA = calculateStudentGPA(student_grades, i);
        std::cout << "GPA for student " << i+1 << ": " << GPA << '\n';
    }
}

float calcuateGPABySubject(char student_grades[][g_CLASSES], int& subject) {
    float total = 0.0;
    for (int i = 0; i < g_STUDENTS; i++) {
        if (student_grades[i][subject] == 'A') {
            total += 4.0;
        } else if (student_grades[i][subject] == 'B') {
            total +=3.0;
        } else if (student_grades[i][subject] == 'C') {
            total +=2.0;
        } else if (student_grades[i][subject] == 'D') {
            total +=1.0;
        } else {
            total += 0.0;
        }
    }
    return total / g_STUDENTS;
}
void displayGPAPerClass(char student_grades[][g_CLASSES]) {
    std::cout << "Average GPA per subject\n"; 
    std::cout << std::setw(3) << "English\tHistory\tMath\n";
    for(int i = 0; i < g_CLASSES; i++) {
        float classGPA = calcuateGPABySubject(student_grades, i); 
        std::cout << std::setw(3) << classGPA << "\t"; 
    }
}