#pragma once
#include <iostream>

class President {
  private:
    int m_number = 0;
    std::string m_name = "";
    std::string m_quote = "";

  public:
    President();
    President(int number, std::string name, std::string quote);
    ~President();
    void setNumber(int number);
    void setName(std::string name);
    void setQuote(std::string quote);
    void displayPresident();
};
