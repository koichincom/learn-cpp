#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

// Instead of typedef, I can use 'using.'

    using text_t = std::string;
    using number_t = int;

int main()
{
    // pairlist_t pairlist;
    text_t firstName = "Bro";
    std::cout << firstName << std::endl;

    number_t myAge = 19;
    std::cout << myAge << std::endl;
    

    return 0;
}
