#include "Grad.h"

Grad::Grad(int id, int units, std::string name, std::string degree) : Student(id, units, name){
	this->degree = degree;
}

Grad::displayRecord() {
	std::cout << "Displaying record for " << this->name << "\n";
	std::cout << "ID: " << this->id << "\n";
	std::cout << "Units: " << this->units << "\n";
	std::cout << "Degree: " << this->degree << "\n";
}