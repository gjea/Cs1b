#include <iostream>

void getTemps(float &temp1, float &temp2, float &temp3);
float calcAvg(float temp1, float temp2, float temp3);
void displayAvg(float temp1, float temp2, float temp3, float average);

int main() {
    float temp1 = 0;
    float temp2 = 0;
    float temp3 = 0;
    float average = 0;
    getTemps(temp1, temp2, temp3);
    average = calcAvg(temp1, temp2, temp3);
    displayAvg(temp1, temp2, temp3, average);
    return 0;
}

void getTemps(float &temp1, float &temp2, float &temp3) {
    std::cout << "Enter temp 1: " << '\n';
    std::cin >> temp1;
    std::cout << "Enter temp 2: " << '\n';
    std::cin >> temp2;
    std::cout << "Enter temp 3: " << '\n';
    std::cin >> temp3;
}

float calcAvg(float temp1, float temp2, float temp3) {
    return (temp1 + temp2 + temp3) / 3;
}

void displayAvg(float temp1, float temp2, float temp3, float average) {
    std::cout << "City #1 temp" << temp1 << '\n';
    std::cout << "City #2 temp" << temp2 << '\n';
    std::cout << "City #3 temp" << temp3 << '\n';
    std::cout << "Average temp: " << average << '\n';
}
