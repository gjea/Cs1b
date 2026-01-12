#include <iostream>
#include <string>

int getStudentID();
float getStudentGPA();
std::string getStudentName();
void displayOutput(int, float, std::string);
int main() {
	int studentID;
	float studentGPA;
	std::string studentName;

	studentID =	getStudentID();
	studentGPA = getStudentGPA();
	studentName = getStudentName();

	displayOutput(studentID, studentGPA, studentName);
}


int getStudentID() {
	int studentID = 0;
	std::cout << "Enter Student ID\n";
	std::cin >> studentID;
	return studentID;
}

float getStudentGPA() {
	float studentGPA = 0.0;
	std::cout << "Enter Student GPA\n";
	std::cin >> studentGPA;
	return studentGPA;
}

std::string getStudentName() {
	std::string studentName;
	std::cout << "Enter student name: \n";
	std::cin >> studentName;
	return studentName;
}

void displayOutput(int ID, float GPA, std::string Name) {
	std::cout << "Student ID: " << ID << "\nStudent GPA: " << GPA << "\nStudent Name: " << Name << std::endl;
}
