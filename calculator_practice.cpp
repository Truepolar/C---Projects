#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************CALCULATOR************" << '\n';

    std::cout << "Enter an operator (+ - / *)" <<'\n';
    std::cin >> op;

    std::cout << "Enter a number" << '\n';
    std::cin >> num1;

    std::cout << "Enter another number" << '\n';
    std::cin >> num2;

    switch(op){

        case '+' :
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-' :
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*' :
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/' :
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "That wasnt a valid input" << '\n';
            break;
    }

    std::cout << "**********************************";

    return 0;
}