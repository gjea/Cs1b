#include "Presidents.h"

President::President() {}
President::President(int number, std::string name, std::string quote) {
    this->m_number = number;
    this->m_name = name;
    this->m_quote = quote;
}

President::~President() {}

void President::setNumber(int number) { this->m_number = number; }

void President::setName(std::string name) { this->m_name = name; }

void President::setQuote(std::string quote) { this->m_quote = quote; }

void President::displayPresident() {
    std::cout << this->m_name << ", President number " << this->m_number
              << ", said: " << this->m_quote << '\n';
}
