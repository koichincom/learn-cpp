    // // An integer can only hold non-fractional values
    // int w1{4.5};    // compile error: list init does not allow narrowing conversion of 4.5 to 4
    // std::cout << "w1: " << w1 << std::endl;

    // int w2 = 4.5;   // compiles: copy init initializes width with 4
    // std::cout << "w2: " << w2 << std::endl;
    // int w3(4.5);    // compiles: direct init initializes width with 4
    // std::cout << "w3: " << w3 << std::endl;