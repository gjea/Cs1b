#include "Student.h"

void Student::displayRecord() {
	std::cout << "Displaying student " << this->name << ": \n";
	std::cout << "ID: " << this->id << '\n';
	std::cout << "Units: " << this->Units << '\n';
}