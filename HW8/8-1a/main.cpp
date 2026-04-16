#include "Student.h"

int main() {
	Student s1;
	Student s2( 100, 12, "Tom P. Lee");

	std::cout << "Here is student #1\n";
	s1.displayRecord();
	std::cout << "Here is student #2\n";
	s2.displayRecord();

	s1.setID(100);
	s1.setName("John Lee Hooker");
	s1.setUnits(15);

	std::cout << "Here is student 1 after the set functions\n";
	s1.displayRecord();



	return 0;
}