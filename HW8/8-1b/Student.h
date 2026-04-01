#pragma once
#include <string>
#include <iostream>

class Student {
protected:
	int id = 0;
	int units = 0;
	std::string name = "";

public: 
	Student() {}
	Student(int id, int units, std::string name) { this->id = id; this->units = units; this->name = name; }
	~Student() {}
	void setID(int newID) { this->id = newID; }
	int getID() { return this->id; }
	void setUnits(int newUnits) { this->units = units; }
	int getUnits() { return this->units; }

};