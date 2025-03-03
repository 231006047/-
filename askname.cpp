#include <iostream>
#include <string>

void askname(std::string &first, std::string &last) {
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first); //мы изменили код >:)


    std::cout << "Now enter your last name: ";
    std::getline(std::cin, last); 
}
