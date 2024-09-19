#include <iostream>

int i;

void coutI()
{
    std::cout << i << std::endl;
}

void coutFizz()
{
    std::cout << "Fizz" << std::endl;
}

void coutBuzz()
{
    std::cout << "Buzz" << std::endl;
}

void coutFizzBuzz()
{
    std::cout << "FizzBuzz" << std::endl;
}

int main(){

    for (i = 1; i <= 50; i++){
        if (i % 15 == 0){
            coutFizzBuzz();
        } else if (i % 5 == 0){
            coutBuzz();
        } else if (i % 3 == 0){
            coutFizz();
        } else {
            coutI();
        }
    }

    return 0;
}