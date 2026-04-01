#include "UnderGrad.h"

UnderGrad::UnderGrad(int id, int units, std::string name, std::string level) : Student(id, units, name) {
	this->level = level;
}

UnderGrad::displayRecord() {
	std::cout << "Displaying record for " << this->name << "\n";
	std::cout << "ID: " << this->id << "\n";
	std::cout << "Units: " << this->units << "\n";
	std::cout << "Level: " << this->level << "\n";
}