#include <iostream>
#include <cmath>

int main()
{
    const double x = 3;
    const double y = 5;
    const double pi = 3.14159265;
    double z;

    z = std::max(x, y);
    std::cout << z << "\n";

    z = pow(2, 4);
    std::cout << z << "\n";

    z = sqrt(9);
    std::cout << z << "\n";

    z = abs(-6);
    std::cout << z << "\n";

    z = round(pi);
    std::cout << z << "\n";

    z = ceil(pi);
    std::cout << z << "\n";
    // ceil rounds up

    z = floor(pi);
    std::cout << z << "\n";
    // floow rounds down

    return 0;
}
