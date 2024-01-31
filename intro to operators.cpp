#include <iostream>

int main()
{
    int first = 0;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "\n";

    if (std::cin.fail()) {
        std::cout << "You didn't enter an integer. \nDefaulting to using 5.\n";
        first = 5;
        std::cin.clear();
        std::cin.ignore(std::cin.rdbuf()->in_avail());
    }

    
}