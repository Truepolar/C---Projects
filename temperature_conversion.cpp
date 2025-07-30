#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout <<"************ Temperature Conversion ************" << '\n';

    std::cout <<"F = Fahrenheit" << '\n';
    std::cout <<"C = Celcius" << '\n';
    std::cout <<"Please enter unit to be converted to" << '\n';
    std::cin >> unit;

    if(unit == 'f' || unit == 'F'){
        std::cout <<"Enter the temperature in Celcius: ";
        std::cin >> temp;
        temp = 1.8 * temp + 32;
        std::cout <<"The temperature is: " << temp << " degrees Fahrenheit" << '\n';
    }

    else if(unit == 'c' || unit == 'C'){
        std::cout <<"Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32)/1.8;
        std::cout <<"The temperature is: " << temp << " degrees Celcius" << '\n';
    }

    else{
        std::cout <<"Please enter either c or f\n";
    }

    std::cout <<"***********************************************";

    return 0;
}