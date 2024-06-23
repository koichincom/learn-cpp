#include <iostream>

int main(){

    int positiveNum;
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> positiveNum;
    } while (positiveNum <= 0);    
   

    while(positiveNum >= 0){
        std::cout << positiveNum << std::endl;
        positiveNum--;
    }

    return 0;
}