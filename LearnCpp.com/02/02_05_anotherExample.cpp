#include <iostream>

int add(int x, int y) // x and y are created and enter scope here
{
    // x and y are usable only within add()
    return x + y;
} // y and x go out of scope and are destroyed here

int main()
{
    int a{5}; // a is created, initialized, and enters scope here
    int b{6}; // b is created, initialized, and enters scope here

    // a and b are usable only within main()

    std::cout << add(a, b) << '\n'; // calls add(5, 6), where x=5 and y=6

    return 0;
} // b and a go out of scope and are destroyed here

/*
    Execution starts at the top of main.
    main variable a is created and given value 5.
    main variable b is created and given value 6.
    Function add is called with argument values 5 and 6.
    add parameters x and y are created and initialized with values 5 and 6 respectively.
    The expression x + y is evaluated to produce the value 11.
    add copies the value 11 back to caller main.
    add parameters y and x are destroyed.
    main prints 11 to the console.
    main returns 0 to the operating system.
    main variables b and a are destroyed.
*/