#pragma once
#include "Student.h"
class Grad : public Student {
private:
	std::string degree = "";
public:
	Grad() {}
	Grad(int id, int units, std::string name, std::string degree);
	~Grad() {}
	void displayRecord();
};