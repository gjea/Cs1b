#pragma once
#include <string>
#include <iostream>

class Student {
private: 
	int id = 0;
	int units = 0;
	std::string name = "";

public:
	Student() {}
	Student(int id, int units, std::string name) {
		this->id = id;
		this->units = units;
		this->name = name;
	}
	~Student();
	void setID(int newID) {this->id = newID}
	void setName(std::string newName) {this->name = newName}
	void setUnits(int newUnits) {this->units = newUnits}
	void displayRecord();
};
