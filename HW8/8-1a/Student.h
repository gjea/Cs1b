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
	Student(int id, std::string name, int units) {
		this->id = id;
		this->name = name;
		this->units = units;
	}
	~Student();
	void setID(int newID) {this->id = newID}
	void setName(std::string newName) {this->name = newName}
	void setUnits(int newUnits) {this->units = newUnits}
	void displayRecord();
};