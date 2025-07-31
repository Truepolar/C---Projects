#include <iostream>
#include <limits>

int main()
{

    // std::string name;

    // while(name.empty()){
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // }

    // std::cout << "Hello " << name;

    //*****************************DO WHILE*********************************

    int number = -1;

    do
    {
        if (std::cin.fail())
        {
            std::cout << "Invalid input. Clearing buffer and trying again." << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cout << "Enter a positive number: ";
        std::cin >> number;

    } while (number <= 0);

    std::cout << "The number is " << number;

    return 0;
}