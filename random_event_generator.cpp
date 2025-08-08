#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: std::cout<< "you win a bumper sticker";
            break;
        case 2: std::cout<< "you win a coin";
            break;
        case 3: std::cout<< "you win a toaster";
            break;
        case 4: std::cout<< "you win a washing machine";
            break;
        case 5: std::cout<< "you win a JET 2 HOLIDAY";
            break;
    }


    return 0;
}