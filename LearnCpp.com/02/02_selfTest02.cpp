#include <iostream>

int getPriceFromUser() {

    int price{};
    do {
        std::cout << "Enter the price: ";
        std::cin >> price;
    } while (price <= 0);
    return price;

}

int getQuantityFromUser() {

    int quantity{};
    do {
        std::cout << "How many products do you have: ";
        std::cin >> quantity;
    } while (quantity <= 0);
    return quantity;
}

int calculateTotalPrice(int price, int quantity) {
    return price * quantity;
}

int main(){

    /* How I should do. */
    int price = getPriceFromUser();
    int quantity = getQuantityFromUser();

    /* How I did. */
    // getPriceFromUser();
    // getQuantityFromUser();
    
    std::cout << "The total price is: " << calculateTotalPrice(price, quantity)
    << '\n';

    return 0;
}