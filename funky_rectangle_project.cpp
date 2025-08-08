#include <iostream>

int main(){

    int rows;
    int columns;
    char symbol;

    std::cout<< "please enter the number of rows for the rectangle \n";
    std::cin >> rows;
    std::cout<< "please enter the number of columns for the rectangle \n";
    std::cin >> columns;
    std::cout<< "please enter the type of symbol to be used in the rectangle \n";
    std::cin >> symbol;

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                std::cout << symbol;
        }
            std::cout << '\n';
     }
return 0;
}