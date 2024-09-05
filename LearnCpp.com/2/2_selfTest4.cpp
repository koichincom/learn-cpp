#include <iostream>

int getPriceFromUser(){
    int price{};
    do {
        std::cout << "Please enter the price: ";
        std::cin >> price;
    } while (price <= 0);

    return price;
}

void comparePrices(int price1, int price2){
    if (price1 > price2){
        std::cout << "First product is more expensive\n";
    } else if (price1 < price2){
        std::cout << "Second product is more expensive\n";
    } else {
        std::cout << "Both products have the same price\n";
    }
}

int main(){
    int price1{getPriceFromUser()};
    int price2{getPriceFromUser()};

    comparePrices(price1, price2);

    return 0;
}