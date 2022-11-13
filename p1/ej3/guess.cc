//guess.cc.
//Try to guess the random number.

#include <iostream>
#include <ctime>
#include <cstdlib>

int randomNumber(){
    int random;

    srand(time(NULL));

    random = rand() % 11;

    return random;
}

int main(){
    int nRandom = randomNumber();
    int n;
    bool init = true;

    while(init){
        std::cout<<"Choose a number: ";

        std::cin >> n;

        if(n > nRandom){
            std::cout<<"The number is biguer than random number\n";
        }

        else if(n < nRandom){
            std::cout<<"The number is lower than random number\n";
        }

        else if(n == nRandom){
            std::cout<<"You guess the number!\n";
            init = false;
        }
    }

    return 0;
}