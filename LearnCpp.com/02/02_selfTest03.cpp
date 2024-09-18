#include <iostream>
#include <string>
#include <cctype>

std::string getTextFromUser(){
    std::cout << "Please enter some text: ";
    std::string text{};
    std::getline(std::cin, text);
    // std::cin >> text;
    return text;
}

int calculateTextLength(std::string text) {
    return text.length();
}

std::string convertToUpperCase(std::string text){
    for (char& c : text) {
        c = std::toupper(c);
    }

    return text;
}

int main(){
    std::string text{getTextFromUser()};
    
    std::cout << "The length of the text is: " << calculateTextLength(text) << '\n';
    std::cout << "The text in uppercase is: " << convertToUpperCase(text) << '\n';
    
    return 0;
}