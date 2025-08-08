#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num = (rand()%100) + 1;
    int tries = 0;
    int guess;
    


    do{
        tries++;
        std::cout << "Please guess a number from 1 - 100 : ";
        std::cin >> guess;

       if(guess < num){
        std::cout << "Your number is too low\n";
        }
        else if(guess > num){
            std::cout << "Your number is too high\n";
        } 
        else{
            std::cout << "You win!\n You took : " << tries << " tries";
        }
    }while(guess != num);

    

    return 0;
}

