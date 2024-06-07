#include <iostream>

int main()
{
    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100;

    std::cout << score << "%";

    return 0;
}

// Starts from 44:04