#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t // shorten the long line to an aliase

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstname = "Roxy";     //std::string = text_t
    number_t age = 24;



    std::cout <<firstname <<'\n';
    std::cout <<age <<'\n';

    return 0;
}