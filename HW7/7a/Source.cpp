#include "Presidents.h"
#include <string>

const int PRESIDENTS = 3;

int main() {

    President list[PRESIDENTS];

    for (int i = 0; i < PRESIDENTS; i++) {
        std::string name;
        int number;
        std::string quote;
        std::cout << "Enter a president name" << '\n';
        std::cin >> name;
        std::cout << "Enter the president's number" << '\n';
        std::cin >> number;
        std::cout << "Enter the president's quote" << '\n';
        std::cin >> quote;
        list[i].setName(name);
        list[i].setNumber(number);
        list[i].setQuote(quote);
    }

    std::cout << "President output: " << '\n';
    for (int i = 0; i < PRESIDENTS; i++) {
        list[i].displayPresident();
    }
    return 0;
}
