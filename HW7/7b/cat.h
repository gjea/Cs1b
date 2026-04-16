#pragma once
#include <iostream>
#include <string>

class Cat {
  private:
    std::string color = "";
    int weight = 0;

  public:
    Cat();
    Cat(std::string color, int weight);
    void setWeight(const int &weight) { this->weight = weight; }
    void setColor(const std::string &color) { this->color = color; }
    void displayInfo();
    void meow() { std::cout << "meow" << '\n'; }
};
