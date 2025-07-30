#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    // using namespace first;   //set defult 

    using namespace std;  //no need to type std anymore

    using std::cout;  //more specific than above to avoid naming collisions

    int x = 0;

    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x << '\n';

    return 0;
}