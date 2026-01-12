#include <iostream>
#include <string>

int getStudentID();
int getStudentGPA();
string getStudentName();

int main() {
	getStudentID();
	getStudentGPA();
	getStudentName();
}


int getStudentID() {
	int studentID = 0;
	std::cout << "Enter Student ID\n";
	std::cin >> studentID;
	return studentID;
}

int getStudentGPA() {
	int studentGPA = 0;
	std::cout << "Enter Student GPA\n";
	std::cin >> studentGPA;
	return studentGPA;
}

string getStudentName() {
	string studentName;
	std::cout << "Enter student name: \n";
	std::cin >> studentName;
	return studentName;
}