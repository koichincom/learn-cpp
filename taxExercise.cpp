#include <iostream>

int main(){
    // Initializing
    int sales = 95000;
    const double stateTaxRate = 4.0 / 100;
    const double countyTaxRate = 2.0 / 100;

    // Calculate taxes
    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totalSales = sales - (stateTax + countyTax);

    // Output
    std::cout << "Total Sales: $" << totalSales << std::endl;
    std::cout << "State Tax: $" << stateTax << std::endl;
    std::cout << "County Tax: $" << countyTax << std::endl;

    return 0;
}