#include "cat.h"

Cat::Cat() {}

Cat::Cat(std::string color, int weight) {
    this->color = color;
    this->weight = weight;
}

void Cat::displayInfo() {
    std::cout << "color: " << color << '\n';
    std::cout << "weight: " << weight << '\n';
}
