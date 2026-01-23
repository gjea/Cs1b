#include <fstream>
#include <iostream>
#include <string>

void getLogin(std::string &username, std::string &password);
bool validateLogin(std::string &username, std::string &password);

int main() {
    std::string username = "";
    std::string password = "";

    getLogin(username, password);
    validateLogin(username, password);
    return 0;
}

void getLogin(std::string &username, std::string &password) {
    std::cout << "Enter username: " << '\n';
    std::cin >> username;
    std::cout << "Enter Password:" << '\n';
    std::cin >> password;
}

bool validateLogin(const std::string &username, const std::string &password) {
    std::string validUser;
    std::string readLine;
    std::string validPass;
    std::ifstream inFile("login.txt", std::ifstream::in);

    inFile >> validUser >> validPass;

    inFile.close();

    if (username == validUser && password == validPass) {
        return true;
    } else {
        return false;
    }
}
