#include <iostream>

int main()
{
    int first = 0;
    int second = 0;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "\n";

    if (std::cin.fail()) {
        std::cout << "You didn't enter an integer. \nDefaulting to using 5.\n";
        first = 5;
        std::cin.clear();
        std::cin.ignore(std::cin.rdbuf()->in_avail());
    }


    std::cout << "Enter the second number: ";
    std::cin >> second;
    std::cout << "\n";

    if (std::cin.fail()) {
        std::cout << "You didn't enter an integer. \nDefaulting to using 5.\n";
        second = 5;
        std::cin.clear();
        std::cin.ignore(std::cin.rdbuf()->in_avail());
    }

    std::cout << "The 2 numbers entered are " << first << " and " << second << "\n";
    std::cout << first << " + " << second << " = " << (first + second) << "\n";
    std::cout << first << " - " << second << " = " << (first - second) << "\n";
    if (first != 0 && second != 0) {
        std::cout << first << " / " << second << " = " << (first / second) << "\n";
    }
    else {
        std::cout << "You can't divide by 0\n";
    }
    std::cout << first << " * " << second << " = " << (first * second) << "\n";
    if (first != 0 && second != 0) {
        std::cout << first << " % " << second << " = " << (first % second) << "\n";
    }
    else {
        std::cout << "You can't divide by 0\n";
    }

    std::cin.ignore(std::cin.rdbuf()->in_avail());
    std::cin.get();
}