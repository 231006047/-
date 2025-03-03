#include <iostream>
#include <string>

void askname(std::string &first, std::string &last) {
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first);//Мы тоже добавили вам комментарий в код 

    std::cout << "Now enter your last name: ";
    std::getline(std::cin, last);
}
