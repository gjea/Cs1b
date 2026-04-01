#pragma once
#include "Student.h"
class UnderGrad : public Student {
private:
	std::string level = "";
public:
	UnderGrad() {}
	UnderGrad(int id, int units, std::string name, std::string level);
	~UnderGrad() {}
	void displayRecord();
};