#include <iostream>

// Function to get a positive interger from the user
int getNumberFromUser(int &i)
{
    int num{};
    int attempts{};

    // Loop until a valid (positive) number is entered
    do
    {
        if (attempts > 0)
        {
            std::cout << "Your input was invalid.\n"; // Prompt if input is invalid
        }

        // Display appropriate message based on whether it's the first or second number
        if (i == 0)
        {
            std::cout << "Please type first number: ";
        }
        else if (i == 1)
        {
            std::cout << "Please type second number: ";
        }
        else if (i == 2)
        {
            std::cout << "Please type third number: ";
        }
        std::cin >> num;
        attempts++;
    } while (num <= 0); // Continue looping if the input is less than or equal to 0

    i++;        // Increment the function call counter
    return num; // Return the valid number
}

// Function to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int calculateGCD(int number1, int number2, int number3)
{
    int r{};

    // Continue the process untill the remainder is 0
    while (number2 > 0)
    {
        r = number1 % number2; // Calculate remainder
        number1 = number2;     // Update number1 to the previous number2
        number2 = r;           // Update number2 to the remainder
    }

    while (number3 > 0)
    {
        r = number1 % number3; // Calculate remainder
        number1 = number3;     // Update number1 to the previous number2
        number3 = r;           // Update number3 to the remainder
    }

    return number1;
}

// Function to calculate the Least Common Multiple (LCM) based on GCD
int calculateLCM(int number1, int number2, int number3, int gcd)
{
    int lCMOfTwo{(number1 * number2) / gcd};
    return (lCMOfTwo * number3) / gcd; 
}

int main()
{
    int i{};
    int num1{getNumberFromUser(i)}; // Get the first positive number from the user
    int num2{getNumberFromUser(i)}; // Get the second positive number from the user
    int num3{getNumberFromUser(i)}; // Get the third positive number from the user

    int gcd{calculateGCD(num1, num2, num3)};

    std::cout << "The GCD of " << num1 << ", " << num2 << " and " << num3 << " is: " 
    << gcd << '\n'; // Display the GCD

    std::cout << "The LCM of " << num1 << ", " << num2 << " and " << num3 << " is: " 
    << calculateLCM(num1, num2, num3, gcd) << '\n'; // Display the LCM

    return 0;
}