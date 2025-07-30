#include <iostream>

int main(){
    int age;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    if(age>100){
            std::cout << "Hello Grandpa";
    }

    else if(age >= 18){
    std::cout << "Welcome to the site";
    }

    else if(age<0){
            std::cout << "Fetus deletus";
    }

    else{
    std::cout << "You are not old enough";    
    }

    return 0;
}