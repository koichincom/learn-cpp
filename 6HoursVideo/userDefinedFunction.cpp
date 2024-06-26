// Starts from 2:03:23
#include <iostream>

void happyBirthday();

int main(){

    // function = a block of reusable code

    std::string name = "Bro";
    happyBirthday();
    

    return 0;
}

void happyBirthday()
{
    std::cout << "Happy Birthday to you!" << name << std::endl;
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday to you!\n";
}

// ChatGPTにここにある問題を説明してもらいながら、parametersやargumentについての理解をし、どのようにuser defined functionとmainを繋げればいいかを理解する
// 時間的には一応2:08:25