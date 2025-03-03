#include <iostream>
#include <string>

#include "askname.h"

int main(int argc, char **argv) {
    std::string first, last;

    askname(first, last);//мы изменили код >:)

    std::cout << "Hello, " << first << " " << last << "!" << std::endl;

    return 0;
}

/* askname.cpp */
#include <iostream>
#include <string>

void askname(std::string &first, std::string &last) {
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first);

    std::cout << "Now enter your last name: ";
    std::getline(std::cin, last);
}
